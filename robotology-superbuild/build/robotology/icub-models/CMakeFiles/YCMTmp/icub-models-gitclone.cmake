set(run 0)

if("/icub-grasping/robotology-superbuild/build/robotology/icub-models/CMakeFiles/YCMStamp/icub-models-gitinfo.txt" IS_NEWER_THAN "/icub-grasping/robotology-superbuild/build/robotology/icub-models/CMakeFiles/YCMStamp/icub-models-gitclone-lastrun.txt")
  set(run 1)
endif()

if(NOT run)
  message(STATUS "Avoiding repeated git clone, stamp file is up to date: '/icub-grasping/robotology-superbuild/build/robotology/icub-models/CMakeFiles/YCMStamp/icub-models-gitclone-lastrun.txt'")
  return()
endif()

set(git_options)

# disable cert checking if explicitly told not to do it
set(tls_verify "")
if(NOT "x" STREQUAL "x" AND NOT tls_verify)
  list(APPEND git_options
    -c http.sslVerify=false)
endif()

if(EXISTS "/icub-grasping/robotology-superbuild/robotology/icub-models")
  if(NOT IS_DIRECTORY "/icub-grasping/robotology-superbuild/robotology/icub-models")
    # FIXME Perhaps support symbolic links?
    message(FATAL_ERROR "\"/icub-grasping/robotology-superbuild/robotology/icub-models\" exists and is not a git repository. Remove it and try again")
  elseif(NOT IS_DIRECTORY "/icub-grasping/robotology-superbuild/robotology/icub-models/.git")
    file(GLOB files "/icub-grasping/robotology-superbuild/robotology/icub-models/*")
    list(LENGTH files nfiles)
    if(nfiles)
      message(FATAL_ERROR "\"/icub-grasping/robotology-superbuild/robotology/icub-models\" folder exists and is not a git repository. Remove it and try again")
    endif()
  else()
    # Already initialized git repository: no need to clone again
    execute_process(
      COMMAND "/usr/bin/git" config --local --get remote.origin.url
      WORKING_DIRECTORY "/icub-grasping/robotology-superbuild/robotology/icub-models"
      OUTPUT_VARIABLE origin_url
      RESULT_VARIABLE error_code
      OUTPUT_STRIP_TRAILING_WHITESPACE
      )
    if(error_code)
      message(FATAL_ERROR "Failed to get origin remote url in: '/icub-grasping/robotology-superbuild/robotology/icub-models'")
    endif()
    if("${origin_url}" STREQUAL "https://github.com/robotology/icub-models.git")
      message(STATUS "Avoiding repeated git clone, repository already exists")
      return()
    else()
      string(TIMESTAMP now "%Y%m%d%H%M%S")
      message(WARNING "Repository URL is different. Renaming 'origin' remote to 'origin.${now}'")
      execute_process(
        COMMAND "/usr/bin/git" remote rename origin origin.${now}
        WORKING_DIRECTORY "/icub-grasping/robotology-superbuild/robotology/icub-models"
        RESULT_VARIABLE error_code
        )
      if(error_code)
        message(FATAL_ERROR "Failed to rename remote in: '/icub-grasping/robotology-superbuild/robotology/icub-models'")
      endif()

      execute_process(
        COMMAND "/usr/bin/git" remote add origin "https://github.com/robotology/icub-models.git"
        WORKING_DIRECTORY "/icub-grasping/robotology-superbuild/robotology/icub-models"
        RESULT_VARIABLE error_code
        )
      if(error_code)
        message(FATAL_ERROR "Failed to add origin remote in: '/icub-grasping/robotology-superbuild/robotology/icub-models'")
      endif()

      # try the fetch 3 times incase there is an odd git fetch issue
      set(error_code 1)
      set(number_of_tries 0)
      while(error_code AND number_of_tries LESS 3)
        execute_process(
          COMMAND "/usr/bin/git" ${git_options} fetch ${git_clone_options} origin
          WORKING_DIRECTORY "/icub-grasping/robotology-superbuild/robotology/icub-models"
          RESULT_VARIABLE error_code
          )
        math(EXPR number_of_tries "${number_of_tries} + 1")
      endwhile()
      if(number_of_tries GREATER 1)
        message(STATUS "Had to git fetch more than once:
                ${number_of_tries} times.")
      endif()
      if(error_code)
        message(FATAL_ERROR "Failed to fetch in: '/icub-grasping/robotology-superbuild/robotology/icub-models'")
      endif()
    endif()
  endif()
endif()

# Now perform the clone if still required
if(NOT IS_DIRECTORY "/icub-grasping/robotology-superbuild/robotology/icub-models/.git")
  # try the clone 3 times in case there is an odd git clone issue
  set(error_code 1)
  set(number_of_tries 0)
  while(error_code AND number_of_tries LESS 3)
    execute_process(
      COMMAND "/usr/bin/git" ${git_options} clone  "https://github.com/robotology/icub-models.git" "icub-models"
      WORKING_DIRECTORY "/icub-grasping/robotology-superbuild/robotology"
      RESULT_VARIABLE error_code
      )
    math(EXPR number_of_tries "${number_of_tries} + 1")
  endwhile()
  if(number_of_tries GREATER 1)
    message(STATUS "Had to git clone more than once:
            ${number_of_tries} times.")
  endif()
  if(error_code)
    message(FATAL_ERROR "Failed to clone repository: 'https://github.com/robotology/icub-models.git'")
  endif()
endif()

execute_process(
  COMMAND "/usr/bin/git" ${git_options} checkout master --
  WORKING_DIRECTORY "/icub-grasping/robotology-superbuild/robotology/icub-models"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to checkout tag: 'master'")
endif()

execute_process(
  COMMAND "/usr/bin/git" ${git_options} submodule update --recursive --init 
  WORKING_DIRECTORY "/icub-grasping/robotology-superbuild/robotology/icub-models"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to update submodules in: '/icub-grasping/robotology-superbuild/robotology/icub-models'")
endif()

# Complete success, update the script-last-run stamp file:
#
execute_process(
  COMMAND ${CMAKE_COMMAND} -E copy
    "/icub-grasping/robotology-superbuild/build/robotology/icub-models/CMakeFiles/YCMStamp/icub-models-gitinfo.txt"
    "/icub-grasping/robotology-superbuild/build/robotology/icub-models/CMakeFiles/YCMStamp/icub-models-gitclone-lastrun.txt"
  WORKING_DIRECTORY "/icub-grasping/robotology-superbuild/robotology/icub-models"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to copy script-last-run stamp file: '/icub-grasping/robotology-superbuild/build/robotology/icub-models/CMakeFiles/YCMStamp/icub-models-gitclone-lastrun.txt'")
endif()

