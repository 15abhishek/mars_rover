from setuptools import find_packages, setup

package_name = 'rover_control'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='abhishek',
    maintainer_email='15abhishek.j@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'rc_control = rover_control.rc_cmd_publisher:main',
            'rc_subscribe = rover_control.rc_cmd_subscriber:main'
        ],
    },
)
