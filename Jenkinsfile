pipeline {
    agent any

    stages {
        stage('Test') {
            steps {
                sh 'cd test && bjam --verbose-test'
            }
        }
    }
}
