Запускается workspace_and_wall_sd, там прописано построение стены с отверстием, затем остальные файлы.
Файлы: workspace_and_wall, manipulator, rrt, Bi_RRT_star, matlab_ros,DH_test. Всё остальное функции.
rrt - строит в workspace одиночное дерево 
Bi_RRT_star - строит два дерева в workspace
manipulator - формирует c-space, строит одно или два дерева, в зависимости от раскомиченного кода, интерполирует траекторию
matlab_ros - небольшая нода для коммуникации
DH_test - правая рука icub от базовой систем координат root_link  до кисти в Corke Robotics Toolbox.
