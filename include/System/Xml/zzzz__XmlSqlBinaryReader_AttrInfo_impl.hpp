#pragma once
// IWYU pragma private; include "System/Xml/XmlSqlBinaryReader_AttrInfo.hpp"
#include "System/Xml/zzzz__XmlSqlBinaryReader_QName_impl.hpp"
#include "System/Xml/zzzz__XmlSqlBinaryReader_AttrInfo_def.hpp"
#include "System/Xml/zzzz__SecureStringHasher_def.hpp"
#include "System/Xml/zzzz__XmlSqlBinaryReader_QName_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::XmlSqlBinaryReader_AttrInfo.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XmlSqlBinaryReader_AttrInfo::*)(::GlobalNamespace::XmlSqlBinaryReader_QName, ::StringW)>(&::GlobalNamespace::XmlSqlBinaryReader_AttrInfo::Set)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xaab5d6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlSqlBinaryReader_AttrInfo>(),
                        {"Set", {}, {::i2c::type_of<::GlobalNamespace::XmlSqlBinaryReader_QName>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlSqlBinaryReader_AttrInfo.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XmlSqlBinaryReader_AttrInfo::*)(::GlobalNamespace::XmlSqlBinaryReader_QName, int32_t)>(&::GlobalNamespace::XmlSqlBinaryReader_AttrInfo::Set)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xaab5db8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlSqlBinaryReader_AttrInfo>(),
                        {"Set", {}, {::i2c::type_of<::GlobalNamespace::XmlSqlBinaryReader_QName>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlSqlBinaryReader_AttrInfo.GetLocalnameAndNamespaceUri
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XmlSqlBinaryReader_AttrInfo::*)(::by_ref<::StringW>, ::by_ref<::StringW>)>(&::GlobalNamespace::XmlSqlBinaryReader_AttrInfo::GetLocalnameAndNamespaceUri)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xaab5e04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlSqlBinaryReader_AttrInfo>(),
                        {"GetLocalnameAndNamespaceUri", {}, {::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlSqlBinaryReader_AttrInfo.GetLocalnameAndNamespaceUriAndHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::XmlSqlBinaryReader_AttrInfo::*)(::System::Xml::SecureStringHasher*, ::by_ref<::StringW>, ::by_ref<::StringW>)>(&::GlobalNamespace::XmlSqlBinaryReader_AttrInfo::GetLocalnameAndNamespaceUriAndHash)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xaab5e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlSqlBinaryReader_AttrInfo>(),
                        {"GetLocalnameAndNamespaceUriAndHash", {}, {::i2c::type_of<::System::Xml::SecureStringHasher*>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlSqlBinaryReader_AttrInfo.MatchNS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::XmlSqlBinaryReader_AttrInfo::*)(::StringW, ::StringW)>(&::GlobalNamespace::XmlSqlBinaryReader_AttrInfo::MatchNS)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaab5e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlSqlBinaryReader_AttrInfo>(),
                        {"MatchNS", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlSqlBinaryReader_AttrInfo.MatchHashNS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::XmlSqlBinaryReader_AttrInfo::*)(int32_t, ::StringW, ::StringW)>(&::GlobalNamespace::XmlSqlBinaryReader_AttrInfo::MatchHashNS)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xaab5e94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlSqlBinaryReader_AttrInfo>(),
                        {"MatchHashNS", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlSqlBinaryReader_AttrInfo.AdjustPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XmlSqlBinaryReader_AttrInfo::*)(int32_t)>(&::GlobalNamespace::XmlSqlBinaryReader_AttrInfo::AdjustPosition)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xaab5eb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlSqlBinaryReader_AttrInfo>(),
                        {"AdjustPosition", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::XmlSqlBinaryReader_AttrInfo::Set(::GlobalNamespace::XmlSqlBinaryReader_QName  n, ::StringW  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlSqlBinaryReader_AttrInfo>(),
                        {"Set", {}, {::i2c::type_of<::GlobalNamespace::XmlSqlBinaryReader_QName>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, n, v);
}
inline void GlobalNamespace::XmlSqlBinaryReader_AttrInfo::Set(::GlobalNamespace::XmlSqlBinaryReader_QName  n, int32_t  pos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlSqlBinaryReader_AttrInfo>(),
                        {"Set", {}, {::i2c::type_of<::GlobalNamespace::XmlSqlBinaryReader_QName>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, n, pos);
}
inline void GlobalNamespace::XmlSqlBinaryReader_AttrInfo::GetLocalnameAndNamespaceUri(::by_ref<::StringW>  localname, ::by_ref<::StringW>  namespaceUri)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlSqlBinaryReader_AttrInfo>(),
                        {"GetLocalnameAndNamespaceUri", {}, {::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, localname, namespaceUri);
}
inline int32_t GlobalNamespace::XmlSqlBinaryReader_AttrInfo::GetLocalnameAndNamespaceUriAndHash(::System::Xml::SecureStringHasher*  hasher, ::by_ref<::StringW>  localname, ::by_ref<::StringW>  namespaceUri)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlSqlBinaryReader_AttrInfo>(),
                        {"GetLocalnameAndNamespaceUriAndHash", {}, {::i2c::type_of<::System::Xml::SecureStringHasher*>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, hasher, localname, namespaceUri);
}
inline bool GlobalNamespace::XmlSqlBinaryReader_AttrInfo::MatchNS(::StringW  localname, ::StringW  namespaceUri)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlSqlBinaryReader_AttrInfo>(),
                        {"MatchNS", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, localname, namespaceUri);
}
inline bool GlobalNamespace::XmlSqlBinaryReader_AttrInfo::MatchHashNS(int32_t  hash, ::StringW  localname, ::StringW  namespaceUri)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlSqlBinaryReader_AttrInfo>(),
                        {"MatchHashNS", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, hash, localname, namespaceUri);
}
inline void GlobalNamespace::XmlSqlBinaryReader_AttrInfo::AdjustPosition(int32_t  adj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlSqlBinaryReader_AttrInfo>(),
                        {"AdjustPosition", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, adj);
}
// Ctor Parameters [CppParam { name: "name", ty: "::GlobalNamespace::XmlSqlBinaryReader_QName", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "val", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "contentPos", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hashCode", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "prevHash", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::XmlSqlBinaryReader_AttrInfo::XmlSqlBinaryReader_AttrInfo(::GlobalNamespace::XmlSqlBinaryReader_QName  name, ::StringW  val, int32_t  contentPos, int32_t  hashCode, int32_t  prevHash) noexcept  {
this->name = name;
this->val = val;
this->contentPos = contentPos;
this->hashCode = hashCode;
this->prevHash = prevHash;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XmlSqlBinaryReader_AttrInfo::XmlSqlBinaryReader_AttrInfo()   {
}
