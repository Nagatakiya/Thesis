rem @echo off

rem �쐬�� : 2014�N7��10��
rem �쐬�� : �{�{�ċK
rem �ړI   : TEX�t�@�C������PDF�t�@�C�����쐬����o�b�`�t�@�C��
rem �����̃t�@�C���̊g���q��".txt"����".bat"�ɏ���������ƃo�b�`�t�@�C���ɂȂ�܂��B

rem �ݒ莖��
set FILENAME="gra_thes"

rem ���̃o�b�`�����݂���t�H���_���J�����g��
rem pushd %0\..

cls

platex %FILENAME%.tex
platex %FILENAME%.tex

dvipdfmx %FILENAME%.dvi
rem dvipdfmx -f msembed.map %FILENAME%.dvi

%FILENAME%.pdf

rem pause

exit

