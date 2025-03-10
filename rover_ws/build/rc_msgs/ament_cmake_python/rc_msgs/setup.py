from setuptools import find_packages
from setuptools import setup

setup(
    name='rc_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('rc_msgs', 'rc_msgs.*')),
)
