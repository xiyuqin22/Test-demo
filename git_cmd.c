1.如何查看修改记录：
① git log --pretty=oneline src/helloworld
② git show d0c20fba4da2ca2dc860d7de48b9d0c5446b1d28
③ git log -p git_cmd.c

2.查看一个文件修改前后的差异：
① git diff

3.提交修改信息到远端：
① git push -u origin main

4.在未把修改添加到暂存区之前，如何用指令恢复到修改之前的状态：
① git checkout -- git_cmd.c

5.如果已经加到暂存区，如何用指令恢复到修改状态：
① git reset HEAD git_cmd.c

6.想要回到项目上一版本或指令版本时，如何通过指令实现：
① git reset --hard HEAD^
② git reset --hard d0c20fba4da2ca2dc860d7de48b9d0c5446b1d28 或 d0c20fba


