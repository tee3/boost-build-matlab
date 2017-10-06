pipeline {
    agent any

    stages {
        stage('Test') {
            steps {
                sh 'bjam --verbose-test'
            }
        }
    }
}
