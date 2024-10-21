/**
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree.
 */
#include <fizz/crypto/test/SignatureTestData.h>

namespace fizz::test {

// test data created using openssl cli
const std::vector<SignatureTestData> kSignatureTestVectors = {
    // 0 - valid rsa_pss_pss_sha256 test case
    SignatureTestData{
        .sigScheme = fizz::SignatureScheme::rsa_pss_sha256,
        .sig =
            "562dce81b8385e1cbe8e1e87df7862ff123783f93c45292dde231f947d9ac624ec286c997d4a5816a40d98a3fea303796bdc88c5c7dd6fca5d2493b96795efae6ac3feba9d6c4f9d40303a6f5d6d904868d89b0b09ae65ee4233d0520a12af3172d233d12370f81d406fc03b14f3f3000a5f3117a1b111ef51b234c786254317aadbd232f202ee0dd45e18ed90c92a3503114d013417531a2fdad13c192f53cd073b1d5fa51d5cb358e562992622e1e1bf355b8a106627db87f2dda4ebcc75277e2dd57f18ed4ed1d4631f03ec6e0ae69e509635e0f4a3ed6cf20bcca90ef81ab5d9cfa10cd9f2f367f6d968fe9e5805097818fcce56443c3410ccf871112e96",
        .validSig = true,
        .certDer =
            "308203533082023b0214643747549d8066efac36572cf70d19e1d8306ab9300d06092a864886f70d01010b05003066310b30090603550406130255533113301106035504080c0a43616c69666f726e69613115301306035504070c0c44656661756c742043697479311c301a060355040a0c1344656661756c7420436f6d70616e79204c7464310d300b06035504030c0474657374301e170d3234303932363233353533375a170d3235303932363233353533375a3066310b30090603550406130255533113301106035504080c0a43616c69666f726e69613115301306035504070c0c44656661756c742043697479311c301a060355040a0c1344656661756c7420436f6d70616e79204c7464310d300b06035504030c047465737430820122300d06092a864886f70d01010105000382010f003082010a02820101008a6c4d2b1d7a4843df11bd545ad7658e8a1d6b961fbafbf94b1f8118d0885d83a320be6875d9f2c231a154fc9aa80849d6773f914b2fe279a67503db221b7215c8983e92bfeb16e6077ed5d1f47eaca1bd83e545276a79021ec43590b2b17283256fec5c8a8fbbe2642c7413236d0e11228406ddf2e7f36562f2c51d79892c1751b22b5588985f51eb21636e83aae01809bf847b501c79353879829ab0f2bc307894b1297be51ff5c15f3109413258071fd6e80216ab3856e8133a18ed05e142da8d90b7fb4c3bd08fd7e68f399e22fdc499287ae20ae9c88c059b41af9c60b570b73d041233ff4c938bc06d94a906c823333b971c900f50d5e731f8dd9640fb0203010001300d06092a864886f70d01010b05000382010100225d83bca5171d13b7034e34ec23116c6213547acf385177b25236cf3a8e6a49c1723dc1e11fa545379975ef72dcdda2b3442251d764c20c8d0ddc033aa8aa65591a9529bb67445839c608ba1c3c462f69548d72b317c5a6bbd6e63bfb804aded926ba9bb5db1db0421d8f658b0046622d0d9369d1eea7d84dff27656d2789b658deab9c0703af5381123e8714d2f8eeff7c0f8fda6ec1190e25e545c6c0acf415d9cc053a96880fa30de62b0d2486c40eb3fe575ff342d0540853001eee1b4a5d04e26aa248fe3544ea9eba9af2ef47ad079a95293b89b596021b744d65578d020d980ec5ecdc7ad496e17e3b99a3883defa3ab6a4e5a78cd5e4d1343e85a02",
        .validCert = true,
        .msg = "Hello, world!\n",
        .msgHash =
            "d9014c4624844aa5bac314773d6b689ad467fa4e1d1a50a1b8a99d5a95f72ff5"},
    // 1 - valid ecdsa_secp256r1_sha256 test case
    SignatureTestData{.sigScheme = fizz::SignatureScheme::ecdsa_secp256r1_sha256, .sig = "3045022023ad19d2fac04482c9f1a0a80361481361d8ff661558e141ced435d005686136022100b223aebb9d4f89bdfacde69ccf6665c159032e16769c6e3c8289774e574c8178", .validSig = true, .certDer = "308201f33082019902146319d6fd924a04fb0811d41f851256f44da86bfe300a06082a8648ce3d040302307c310b30090603550406130255533113301106035504080c0a43616c69666f726e69613113301106035504070c0a4d656e6c6f205061726b311a3018060355040a0c11596f7572204f7267616e697a6174696f6e310d300b060355040b0c04546573743118301606035504030c0f746573742e646f6d61696e2e666f6f301e170d3234303933303231303233375a170d3235303933303231303233375a307c310b30090603550406130255533113301106035504080c0a43616c69666f726e69613113301106035504070c0a4d656e6c6f205061726b311a3018060355040a0c11596f7572204f7267616e697a6174696f6e310d300b060355040b0c04546573743118301606035504030c0f746573742e646f6d61696e2e666f6f3059301306072a8648ce3d020106082a8648ce3d0301070342000462a9238aaf2d52630b64325ddf600009592d9144848ddb9c349b83750363e6177c4ca51ab865b66401e6fa720148183a2dde815dad0bf6fcf43c49f9b0985594300a06082a8648ce3d040302034800304502210097eddaa3ddf5c6a3f7e993413252bd7c9c2b04f734d0824f9548aa3724b6a4ff02200be7b4a218285a96c83a18ec22b80cad27d99781b08cdf3fc1c8dd96e10435e9", .validCert = true, .msg = "Hello, world!", .msgHash = "315f5bdb76d078c43b8ac0064e4a0164612b1fce77c869345bfc94c75894edd3"},
    // 2 - valid ecdsa_secp384r1_sha384 test case
    SignatureTestData{
        .sigScheme = fizz::SignatureScheme::ecdsa_secp384r1_sha384,
        .sig =
            "3066023100c49b7e7b11c10cd043070e71ca6f9b6632871ba9e50d8a76e58785599b4502ecba1d2c2f719fad9b33c7df4898e704d402310097da5314e696e1badeb43a096e6abf19b44b31c431d3b8bbb46e9ad1f170c5d8913d28259168207e77c4263f71d022b7",
        .validSig = true,
        .certDer =
            "30820230308201b602144789a43d59094e62d0a185f3f389fe23dce66996300a06082a8648ce3d040302307c310b30090603550406130255533113301106035504080c0a43616c69666f726e69613113301106035504070c0a4d656e6c6f205061726b311a3018060355040a0c11596f7572204f7267616e697a6174696f6e310d300b060355040b0c04546573743118301606035504030c0f746573742e646f6d61696e2e666f6f301e170d3234303933303231303834305a170d3235303933303231303834305a307c310b30090603550406130255533113301106035504080c0a43616c69666f726e69613113301106035504070c0a4d656e6c6f205061726b311a3018060355040a0c11596f7572204f7267616e697a6174696f6e310d300b060355040b0c04546573743118301606035504030c0f746573742e646f6d61696e2e666f6f3076301006072a8648ce3d020106052b81040022036200049aed07504902c74140e63dd62e1d66fdca4cecc89769d4f99b16cf5d5976d07f6dd1f7ea5e29fa1f485bacff61ab8d2b6efab6fcca5c2f4866c553f94f5777c3413459bae774005c3e49f933726c448bbb3c0a632e1a7fd8eacb9887ac31ce0e300a06082a8648ce3d04030203680030650231009624cb719e4938c0d3820abbace751601716e57592e6b6f6df8bb7ca2f8eed9843f3599f379d1c621f82f9e371ffee190230634387dc6c396373382f940a9f65f67261294d7e4208fd6a2da96fb54ac11588ab72760f877e32007be0f5f74ee46c50",
        .validCert = true,
        .msg = "Hello, world!",
        .msgHash =
            "55bc556b0d2fe0fce582ba5fe07baafff035653638c7ac0d5494c2a64c0bea1cc57331c7c12a45cdbca7f4c34a089eeb"},
    // 3 - invalid cert - rsassa-pss test case
    SignatureTestData{
        .sigScheme = fizz::SignatureScheme::rsa_pss_sha256,
        .sig =
            "398b7a4b27bb3959774965f26f36281573c604ac8c1caf7643ac09855f581f8d508d531ee236dcc90cb0d5305aa98a87df80d806f64f6478407966cd18c413c109c07ea7e3a3be5b3825f9db3019ca1c2788dbb94387d97c8dca8b4d02e1665dd0bef05139a4890061bfab164542ac5dce1b08028b46fc389a890f0ae467b027deac9ea01c65589877826b5b9f2c330b9974dd00d3347dd459d5aa9e841cd2cf68a9201825eaad305b9a346e271fa86d3e08691c539065daed5587f65c330c3866226f4bef4ec7dc7c08fb9fdd5951605c8a990ac6915a2e1a0f815177ac0fbcfe51e89bf8a5e0b79d34080d2ed400cdafb3a9f890f983242bc75d50d93801cc",
        .validSig = false,
        .certDer =
            "308203893082027102146728bd75916048a11002bb13ca8da90d7032d0300d06092a864886f70d01010b0500308180310b30090603550406130255533113301106035504080c0a43616c69666f726e69613113301106035504070c0a4d656e6c6f205061726b311a3018060355040a0c11596f7572204f7267616e697a6174696f6e3110300e060355040b0c07546573744f72673119301706035504030c1074657374696e672e666f6f2e74657374301e170d3234313030313230313734385a170d3235313030313230313734385a308180310b30090603550406130255533113301106035504080c0a43616c69666f726e69613113301106035504070c0a4d656e6c6f205061726b311a3018060355040a0c11596f7572204f7267616e697a6174696f6e3110300e060355040b0c07546573744f72673119301706035504030c1074657374696e672e666f6f2e7465737430820122300d06092a864886f70d01010105000382010f0030010a0282010100bdf4456e8cb4a753b78ae1f8791b2d13416f02428c314d981622833405da79c562df1a264e5c222cfcede2db36d7977938cb8fc411a74d7b8886e6b7a3acdb30f7dc0dddc88ab1fb3148bea1a3f81b92260f8afdb75f7e93ee73003081b1d07b0ebf53247ee0ef705076c6aac8800c30b2d57dd355bfa17824e8357c4c89071329c11e539c0c664f97df3056b348a2494cfff594d558f90e1952609cb1064cc8fc86a52de556c9df85d5b7565ebec5583ee57bd52db26843029f325ac8d170bbd6369f531b409ed9f4f195dd9557758eafd1ee18027c2c125a97c64b2d0da53361f38342a412f71469755010c363bf122920bb96ae22fac773bd8b54175902bf0203010001300d06092a864886f70d01010b0500038201010028081822a7492260a84a830ec0ebd6719b31e9d6ab0c5433df38861abafc006093f463b970a867c2c0b695dbb58c1f55f4f56105e48a4bc3b253e9ccbc5e171b2d23875b8106403b5daea971ee3e76a5398655534bebaf4b55ff7c99b95616f34122f25cf9d8a03d5771de231ed0ba360b38ca8eba9fa83e09bb3ddfa3e291662ea968683d6c1a49f9f58a5307487a17e23d3efb50aa7f1a42f58050a9815a501d2aa08fa6c4733fe45c173536fe3fdf93909bdba56f3a6f941d5c4be64d22890a3546bc9d4b2029262984dfac5b7bf51d31dbec6d460f56f6d9c0662284cc6708b286d4b132903a24d7fae1304f30c44d7a3f15a972890734cb322d5d7f2e75",
        .validCert = false,
        .msg = "Hello, world!",
        .msgHash =
            "315f5bdb76d078c43b8ac0064e4a0164612b1fce77c869345bfc94c75894edd3"},
    // 4 - invalid signature - rsassa-pss test case
    SignatureTestData{
        .sigScheme = fizz::SignatureScheme::rsa_pss_sha256,
        .sig =
            "51618fc594d0c1d308037edf693536a33ed0e00ef9a7fa248da3537f841294c9bc80bd247e98d325044bd84b16067a035dbd701b8944d2bdaae71b439de2ab99174f1b6e33cad6858411ee2bc70d8e1f1a297c050c49891db549e3955496fb549821fe68c75f4dc13e1bf566c1b9496de4b2ae00b08224f61e40dfbf4b985cc3259f6cf9a666e70d2342365780d3877f01f1b601fd2e5e08c0f8072f122c1af09d135fb027e66142da1f01a3e405d50be58cc14ff7a5b36291ac6150a1cadf46a6a032a1ff1c53de7f623ccc876499d42a84492b911e7c5f94dd84c2aa831bbd13f1783b9063575e48f146f843be986c0267b3238e74a6ce8ef5bbe191e3bd",
        .validSig = false,
        .certDer =
            "3082038930820271021450dfdea7a4b5b8ffd794e1f5b6b4da8c0f782b20300d06092a864886f70d01010b0500308180310b30090603550406130255533113301106035504080c0a43616c69666f726e69613113301106035504070c0a4d656e6c6f205061726b311a3018060355040a0c11596f7572204f7267616e697a6174696f6e3110300e060355040b0c07546573744f72673119301706035504030c1074657374696e672e666f6f2e74657374301e170d3234313030313231333131355a170d3235313030313231333131355a308180310b30090603550406130255533113301106035504080c0a43616c69666f726e69613113301106035504070c0a4d656e6c6f205061726b311a3018060355040a0c11596f7572204f7267616e697a6174696f6e3110300e060355040b0c07546573744f72673119301706035504030c1074657374696e672e666f6f2e7465737430820122300d06092a864886f70d01010105000382010f003082010a02820101009a5c4eeb38f3f1f96d2ad1a70d23360290650a2985ac6ee963bd14d265eaa572d91c4b595016793b2148a57be37bb9231f80daca5aa9a61e120c30fa9e4cbda86719589ef18a2dd52a5e90a53b08fd267f32a792b6fc7fd494d0cded88e278cfb45a83f076f6956ca27622aa7500366cf88b48437637b34a2987d238597c55b1939f62bf442d3bac1b51226339b06ebde903bde13dea009a2a2da9aaa7919187b0cff867a255b8d883bac48e1fb78d50057222228163ce28d5e1689c0ccc628a2b17e9356d6f13189fdfc84769e599b6f6bb5b010dbb1d24aff2a897ae6a7db110e994b482af28007cce15a8125e9c9d2c9d7df8367ec97919823c42aaa4f1090203010001300d06092a864886f70d01010b05000382010100399752a9a4bc51d309c78cc9a81e05d15b138fc03fb32f4e996855e0896ebce4205b3139980ba51717ac39df2d10857df1aa756be8b22a19c116059b35cd8e004cf73bb807cb64ef5972c4e03cbf18f9f51a9c52c1a4681cca4384f91300ed0e729fb9b4de692a1869a5f3991de92b777356bf5dc7d404f58702ad3b09aab10706fec056de21a750b61de0f47a325be6f218b93e08bca30b159f0c64a188b53dc431bb6f0cc7947fb3b9a580f040a89bb4b5adbf4925471dba259ee0fef4f1fc6a56a7dfcd845d5f3b1e143c894b99530d85b416b0884f6539003bd7ab6f277b250c8f9735793412b45b12b2b0796dd5b2ecd2603f71c6826a3ba52c9c8b482a",
        .validCert = true,
        .msg = "Hello, world!",
        .msgHash =
            "315f5bdb76d078c43b8ac0064e4a0164612b1fce77c869345bfc94c75894edd3"},

    // 5 - invalid cert - ecdsa_secp256r1_sha256 test case
    SignatureTestData{
        .sigScheme = fizz::SignatureScheme::ecdsa_secp256r1_sha256,
        .sig =
            "3045022100dae15a3f55f4409fcd4eb96fdaa02025a8ff53b62bb98d1e4868555ab265289702203962c9a3f86d2fea90a9edd56713c1d46e3951c0470393223954e4a146932207",
        .validSig = true,
        .certDer =
            "308201fc308201a3021455a027a0ac6ff279f340bed6731ff6a2e30af9300a06082a8648ce3d040302308180310b30090603550406130255533113301106035504080c0a43616c69666f726e69613113301106035504070c0a4d656e6c6f205061726b311a3018060355040a0c11596f7572204f7267616e697a6174696f6e3110300e060355040b0c07546573744f72673119301706035504030c1074657374696e672e666f6f2e74657374301e170d3234313030313231333834305a170d3235313030313231333834305a308180310b30090603550406130255533113301106035504080c0a43616c69666f726e69613113301106035504070c0a4d656e6c6f205061726b311a3018060355040a0c11596f7572204f7267616e697a6174696f6e3110300e060355040b0c07546573744f72673119301706035504030c1074657374696e672e666f6f2e746573743059301306072a8648ce3d020106082a8648ce3d0301070342000435745f07bead40d26140b3f8d97d815119379157fab751f45d702b2088b59b26100fea0f342becafff39a7ce699c8cda49b2ad2043bce605779eae234de85086300a06082a8648ce3d04030203470030440220549c247bfbba0eb61d04cb8a8769fc256b2931799e0255eb4a9c2f1169ff2802206ce252798f37f06e00bc7a4fecbb4d5212e674fb3f71d2fb479cd8d7678c5fcb",
        .validCert = false,
        .msg = "Hello, world!",
        .msgHash =
            "315f5bdb76d078c43b8ac0064e4a0164612b1fce77c869345bfc94c75894edd3"},

    // 6 -  invalid signature - ecdsa_secp256r1_sha256 test case
    SignatureTestData{
        .sigScheme = fizz::SignatureScheme::ecdsa_secp256r1_sha256,
        .sig =
            "30460221008074afcccbc8f8e525a0c24f04e234a00807e62851d74a4b41dca5584cf953022100a76afced41dd4bbc1be4d5c8885a7488806c0b01da700c238dde1b09b248fcbb",
        .validSig = false,
        .certDer =
            "308201fd308201a30214778532db145aadda2117895f247eb8d503b23530300a06082a8648ce3d040302308180310b30090603550406130255533113301106035504080c0a43616c69666f726e69613113301106035504070c0a4d656e6c6f205061726b311a3018060355040a0c11596f7572204f7267616e697a6174696f6e3110300e060355040b0c07546573744f72673119301706035504030c1074657374696e672e666f6f2e74657374301e170d3234313030313231343032315a170d3235313030313231343032315a308180310b30090603550406130255533113301106035504080c0a43616c69666f726e69613113301106035504070c0a4d656e6c6f205061726b311a3018060355040a0c11596f7572204f7267616e697a6174696f6e3110300e060355040b0c07546573744f72673119301706035504030c1074657374696e672e666f6f2e746573743059301306072a8648ce3d020106082a8648ce3d0301070342000408db6e6280229644f9f95cf8add34dc29c73dc3e21d65f179d82d55f144531a42e1e57e6e3adcb1c938370eb73928bbd68e1aa295330e0417da9f0850c64efde300a06082a8648ce3d04030203480030450220011c6feb99839f8c4af03cb178feade94df3c1e8617b7c5e1ce65f730f871680022100d686ad0ab9f4bc3ebc5e821d2065bd98777ea33d74903ec3a48702e2ce8e7043",
        .validCert = true,
        .msg = "Hello, world!",
        .msgHash =
            "315f5bdb76d078c43b8ac0064e4a0164612b1fce77c869345bfc94c75894edd3"},

    // 7 - invalid cert - ecdsa_secp384r1_sha384 test case
    SignatureTestData{
        .sigScheme = fizz::SignatureScheme::ecdsa_secp384r1_sha384,
        .sig =
            "306502304c0c6e4f1d392f8a966d54992003f802d7b1da2a4c0c351fcba892aedd795218e1bc658c6c4ecf4050761f9e31e2bc31023100ac883984d44e386b4295f4255203dba72ee4890b7959fcc5070b695e33c9dda506555f104033034c966cd8f49d8b48f0",
        .validSig = true,
        .certDer =
            "82023a308201c002141ac96a7d4dcef831854fe5201fb95b267f48278e300a06082a8648ce3d040302308180310b30090603550406130255533113301106035504080c0a43616c69666f726e69613113301106035504070c0a4d656e6c6f205061726b311a3018060355040a0c11596f7572204f7267616e697a6174696f6e3110300e060355040b0c07546573744f72673119301706035504030c1074657374696e672e666f6f2e74657374301e170d3234313030313231343231395a170d3235313030313231343231395a3081803b30090603550406130255533113301106035504080c0a43616c69666f726e69613113301106035504070c0a4d656e6c6f205061726b311a3018060355040a0c11596f7572204f7267616e697a6174696f6e3110300e060355040b0c07546573744f72673119301706035504030c1074657374696e672e666f6f2e746573743076301006072a8648ce3d020106052b8104002203620004c46d8253a5a59c40031990d99bc968686643c3dd17b945ed6761b9d39a46b9c9322acf74f7024085c033bd2b2a0f1fdf30f6004bcb0d5a878b5055228d2663e7290b78d96f554960f38f39fd972dcaa7fcbdbbcd857d08c5bb1d297264e990bd300a06082a8648ce3d0403020368003065023100f0a944889a2701c5edbe86283df7e859d0faff86b183448b8ee55501aa4cfe9d2c25dfcd5da874a12a347a1719ff992e023034db5f82f9086cc6d465c597398ef3799581d5cc595f6a6c810110ea10fc3baf0156aa0d9577b31e3fc27eed942eb1f5",
        .validCert = false,
        .msg = "Hello, world!",
        .msgHash =
            "55bc556b0d2fe0fce582ba5fe07baafff035653638c7ac0d5494c2a64c0bea1cc57331c7c12a45cdbca7f4c34a089eeb"},

    // 8 - invalid signature - ecdsa_secp384r1_sha384 test case
    SignatureTestData{
        .sigScheme = fizz::SignatureScheme::ecdsa_secp384r1_sha384,
        .sig =
            "3066023100b042d9297ae6d555ffaaf8a74588a4dc7126c26679228a86c98c84d95078e663812c4c1d49795c0d5ebccc5892f27bac023100c4bd2cb2bdcbca2014cb89df3b521b8df87a49688c2025b6b1cff6019fbc49752b2404f818ba8712e9b03ecfce4f5354",
        .validSig = false,
        .certDer =
            "3082023a308201c0021437853557f1efcb1a8a6d76bb8584624254b86767300a06082a8648ce3d040302308180310b30090603550406130255533113301106035504080c0a43616c69666f726e69613113301106035504070c0a4d656e6c6f205061726b311a3018060355040a0c11596f7572204f7267616e697a6174696f6e3110300e060355040b0c07546573744f72673119301706035504030c1074657374696e672e666f6f2e74657374301e170d3234313030313231343332335a170d3235313030313231343332335a308180310b30090603550406130255533113301106035504080c0a43616c69666f726e69613113301106035504070c0a4d656e6c6f205061726b311a3018060355040a0c11596f7572204f7267616e697a6174696f6e3110300e060355040b0c07546573744f72673119301706035504030c1074657374696e672e666f6f2e746573743076301006072a8648ce3d020106052b81040022036200040967864e9ddbbd1b0af8080f69e2f83261f44d96143f64ac2379e7252c9bef38184de5153cc908f44f23ddd73357cdabb30615e1cf17619808a43e045511c598e368102d58d84bee3a3301d0022a620c8404f1e8528531dce9940d751f0d9088300a06082a8648ce3d0403020368003065023100e2f5209d8f6d9f29325a26c385643413942cbbf4151eb43633055c5333b627a32de4ff6618e454d525f7883d1c8975380230252839778169069d830df8f7e3833d6f8fa36f08e5fa12b3f3b3b08a78ce752151bfc65d82580b707604e60597d2d014",
        .validCert = true,
        .msg = "Invalid Test\n",
        .msgHash =
            "73775a33f77343f98f0b05fad1cb300facefeb6f95131fd09a0faa18ad5fdaf4a7a9fdd14f1b8b93a4e58e05d01c6d0f"},

    // 9 - rsa_pss_pss_sha256 with short signature
    SignatureTestData{
        .sigScheme = fizz::SignatureScheme::rsa_pss_sha256,
        .sig = "01",
        .validSig = false,
        .certDer =
            "308203533082023b0214643747549d8066efac36572cf70d19e1d8306ab9300d06092a864886f70d01010b05003066310b30090603550406130255533113301106035504080c0a43616c69666f726e69613115301306035504070c0c44656661756c742043697479311c301a060355040a0c1344656661756c7420436f6d70616e79204c7464310d300b06035504030c0474657374301e170d3234303932363233353533375a170d3235303932363233353533375a3066310b30090603550406130255533113301106035504080c0a43616c69666f726e69613115301306035504070c0c44656661756c742043697479311c301a060355040a0c1344656661756c7420436f6d70616e79204c7464310d300b06035504030c047465737430820122300d06092a864886f70d01010105000382010f003082010a02820101008a6c4d2b1d7a4843df11bd545ad7658e8a1d6b961fbafbf94b1f8118d0885d83a320be6875d9f2c231a154fc9aa80849d6773f914b2fe279a67503db221b7215c8983e92bfeb16e6077ed5d1f47eaca1bd83e545276a79021ec43590b2b17283256fec5c8a8fbbe2642c7413236d0e11228406ddf2e7f36562f2c51d79892c1751b22b5588985f51eb21636e83aae01809bf847b501c79353879829ab0f2bc307894b1297be51ff5c15f3109413258071fd6e80216ab3856e8133a18ed05e142da8d90b7fb4c3bd08fd7e68f399e22fdc499287ae20ae9c88c059b41af9c60b570b73d041233ff4c938bc06d94a906c823333b971c900f50d5e731f8dd9640fb0203010001300d06092a864886f70d01010b05000382010100225d83bca5171d13b7034e34ec23116c6213547acf385177b25236cf3a8e6a49c1723dc1e11fa545379975ef72dcdda2b3442251d764c20c8d0ddc033aa8aa65591a9529bb67445839c608ba1c3c462f69548d72b317c5a6bbd6e63bfb804aded926ba9bb5db1db0421d8f658b0046622d0d9369d1eea7d84dff27656d2789b658deab9c0703af5381123e8714d2f8eeff7c0f8fda6ec1190e25e545c6c0acf415d9cc053a96880fa30de62b0d2486c40eb3fe575ff342d0540853001eee1b4a5d04e26aa248fe3544ea9eba9af2ef47ad079a95293b89b596021b744d65578d020d980ec5ecdc7ad496e17e3b99a3883defa3ab6a4e5a78cd5e4d1343e85a02",
        .validCert = true,
        .msg = "Hello, world!\n",
        .msgHash =
            "d9014c4624844aa5bac314773d6b689ad467fa4e1d1a50a1b8a99d5a95f72ff5"},

    // 10 - ecdsa_secp256r1_sha256 with short signature
    SignatureTestData{
        .sigScheme = fizz::SignatureScheme::ecdsa_secp256r1_sha256,
        .sig = "01",
        .validSig = false,
        .certDer =
            "308201f33082019902146319d6fd924a04fb0811d41f851256f44da86bfe300a06082a8648ce3d040302307c310b30090603550406130255533113301106035504080c0a43616c69666f726e69613113301106035504070c0a4d656e6c6f205061726b311a3018060355040a0c11596f7572204f7267616e697a6174696f6e310d300b060355040b0c04546573743118301606035504030c0f746573742e646f6d61696e2e666f6f301e170d3234303933303231303233375a170d3235303933303231303233375a307c310b30090603550406130255533113301106035504080c0a43616c69666f726e69613113301106035504070c0a4d656e6c6f205061726b311a3018060355040a0c11596f7572204f7267616e697a6174696f6e310d300b060355040b0c04546573743118301606035504030c0f746573742e646f6d61696e2e666f6f3059301306072a8648ce3d020106082a8648ce3d0301070342000462a9238aaf2d52630b64325ddf600009592d9144848ddb9c349b83750363e6177c4ca51ab865b66401e6fa720148183a2dde815dad0bf6fcf43c49f9b0985594300a06082a8648ce3d040302034800304502210097eddaa3ddf5c6a3f7e993413252bd7c9c2b04f734d0824f9548aa3724b6a4ff02200be7b4a218285a96c83a18ec22b80cad27d99781b08cdf3fc1c8dd96e10435e9",
        .validCert = true,
        .msg = "Hello, world!",
        .msgHash =
            "315f5bdb76d078c43b8ac0064e4a0164612b1fce77c869345bfc94c75894edd3"},

    // 11 - ecdsa_secp384r1_sha384 with short signature
    SignatureTestData{
        .sigScheme = fizz::SignatureScheme::ecdsa_secp384r1_sha384,
        .sig = "01",
        .validSig = false,
        .certDer =
            "30820230308201b602144789a43d59094e62d0a185f3f389fe23dce66996300a06082a8648ce3d040302307c310b30090603550406130255533113301106035504080c0a43616c69666f726e69613113301106035504070c0a4d656e6c6f205061726b311a3018060355040a0c11596f7572204f7267616e697a6174696f6e310d300b060355040b0c04546573743118301606035504030c0f746573742e646f6d61696e2e666f6f301e170d3234303933303231303834305a170d3235303933303231303834305a307c310b30090603550406130255533113301106035504080c0a43616c69666f726e69613113301106035504070c0a4d656e6c6f205061726b311a3018060355040a0c11596f7572204f7267616e697a6174696f6e310d300b060355040b0c04546573743118301606035504030c0f746573742e646f6d61696e2e666f6f3076301006072a8648ce3d020106052b81040022036200049aed07504902c74140e63dd62e1d66fdca4cecc89769d4f99b16cf5d5976d07f6dd1f7ea5e29fa1f485bacff61ab8d2b6efab6fcca5c2f4866c553f94f5777c3413459bae774005c3e49f933726c448bbb3c0a632e1a7fd8eacb9887ac31ce0e300a06082a8648ce3d04030203680030650231009624cb719e4938c0d3820abbace751601716e57592e6b6f6df8bb7ca2f8eed9843f3599f379d1c621f82f9e371ffee190230634387dc6c396373382f940a9f65f67261294d7e4208fd6a2da96fb54ac11588ab72760f877e32007be0f5f74ee46c50",
        .validCert = true,
        .msg = "Hello, world!",
        .msgHash =
            "55bc556b0d2fe0fce582ba5fe07baafff035653638c7ac0d5494c2a64c0bea1cc57331c7c12a45cdbca7f4c34a089eeb"},

    // 12 - mismatched key: ecdsa_secp384r1_sha384 with a p256 key
    SignatureTestData{
        .sigScheme = fizz::SignatureScheme::ecdsa_secp384r1_sha384,
        .sig =
            "306402301dc5375b46e4f8fda94dced18ef3b8aa79607595c0be2fe85b5660ad2ca9f4380bb9758deb3fee7552af9a3d6c6bf3c202302533afcd9cb6933737322cee3eccc65485149d47a038a5a382784b68b039dd7a1cc6ac79c15f937f48deda88f0a78e26",
        .validSig = false,
        .certDer =
            "308201fd308201a302141f28e27e7bde3694a04b7a9129a6f800309d4c49300a06082a8648ce3d040302308180310b30090603550406130255533113301106035504080c0a43616c69666f726e69613113301106035504070c0a4d656e6c6f205061726b311a3018060355040a0c11596f7572204f7267616e697a6174696f6e3110300e060355040b0c07546573744f72673119301706035504030c1074657374696e672e666f6f2e74657374301e170d3234313031363231313835365a170d3235313031363231313835365a308180310b30090603550406130255533113301106035504080c0a43616c69666f726e69613113301106035504070c0a4d656e6c6f205061726b311a3018060355040a0c11596f7572204f7267616e697a6174696f6e3110300e060355040b0c07546573744f72673119301706035504030c1074657374696e672e666f6f2e746573743059301306072a8648ce3d020106082a8648ce3d03010703420004da1a9dd4e9cc8033f84c130d9c6b508341086c0c9cea94cc7943d1b26c978ff403c7157e03af43b26493a86e2d88f9b92af290431c00ac7cf5bb39b3cfeb47e7300a06082a8648ce3d040302034800304502202f98fd2d4e4eb089f9f9aa9e94f17362ae8013e034c6c26bc9752cf3a0be0387022100ee3fc5a1372da8d79ea3b1ab2aec71ac06cccbfac04149d08dfa6bfc4635343b",
        .validCert = true,
        .msg = "Handshake message",
        .msgHash =
            "c9fbdd356812ea7cb791c6f1d4757890e4ba230e540ff06dae61bf89e25dfd90c8532cc27e41233743040fa8918aaa6d"},

};
} // namespace fizz::test
