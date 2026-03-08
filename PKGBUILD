pkgname=todos-bin
pkgver=1.1.1
pkgrel=1
pkgdesc="An implementation of the TodoMVC specification (Qt6 version)"
arch=('x86_64')
url="https://github.com/codegod100/todos"
license=('unknown')
depends=('qt6-base' 'qt6-declarative')
provides=('todos')
conflicts=('todos')
source=("todos-${pkgver}::https://github.com/codegod100/todos/releases/download/v${pkgver}/todos-arch-qt6-bin")
sha256sums=('6130541b17322b14f70eb3469ff3e2c6c1cacf308bc2835bce79ce478e096d6e')

package() {
    install -Dm755 "${srcdir}/todos-${pkgver}" "${pkgdir}/usr/bin/todos"
}
