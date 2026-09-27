#pragma once
// IWYU pragma private; include "GlobalNamespace/GTPosRotScaleToString.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GTPosRotScaleToString_def.hpp"
#include "System/Text/RegularExpressions/zzzz__Match_def.hpp"
#include "System/Text/RegularExpressions/zzzz__Regex_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GTPosRotScaleToString.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, bool, ::StringW)>(&::GlobalNamespace::GTPosRotScaleToString::ToString)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x56af44c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPosRotScaleToString*>(),
                        {"ToString", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTPosRotScaleToString.ValToStr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::Vector3)>(&::GlobalNamespace::GTPosRotScaleToString::ValToStr)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x56af6fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPosRotScaleToString*>(),
                        {"ValToStr", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTPosRotScaleToString.ParseIsWorldSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::GlobalNamespace::GTPosRotScaleToString::ParseIsWorldSpace)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x56af7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPosRotScaleToString*>(),
                        {"ParseIsWorldSpace", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTPosRotScaleToString.ParseParentPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::GlobalNamespace::GTPosRotScaleToString::ParseParentPath)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x56af814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPosRotScaleToString*>(),
                        {"ParseParentPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTPosRotScaleToString.TryParsePos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::UnityEngine::Vector3>)>(&::GlobalNamespace::GTPosRotScaleToString::TryParsePos)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x56af908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPosRotScaleToString*>(),
                        {"TryParsePos", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTPosRotScaleToString.TryParseRot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::UnityEngine::Vector3>)>(&::GlobalNamespace::GTPosRotScaleToString::TryParseRot)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x56afa40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPosRotScaleToString*>(),
                        {"TryParseRot", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTPosRotScaleToString.TryParseScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::UnityEngine::Vector3>)>(&::GlobalNamespace::GTPosRotScaleToString::TryParseScale)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x56afab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPosRotScaleToString*>(),
                        {"TryParseScale", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTPosRotScaleToString.TryParseVec3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::UnityEngine::Vector3>)>(&::GlobalNamespace::GTPosRotScaleToString::TryParseVec3)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x56afb60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPosRotScaleToString*>(),
                        {"TryParseVec3", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTPosRotScaleToString.TryParseVec3_internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Text::RegularExpressions::Regex*, ::StringW, ::by_ref<::UnityEngine::Vector3>)>(&::GlobalNamespace::GTPosRotScaleToString::TryParseVec3_internal)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x56af978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPosRotScaleToString*>(),
                        {"TryParseVec3_internal", {}, {::i2c::type_of<::System::Text::RegularExpressions::Regex*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTPosRotScaleToString.StringToVector3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::System::Text::RegularExpressions::Match*)>(&::GlobalNamespace::GTPosRotScaleToString::StringToVector3)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x56afbd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPosRotScaleToString*>(),
                        {"StringToVector3", {}, {::i2c::type_of<::System::Text::RegularExpressions::Match*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::GTPosRotScaleToString::ToString(::UnityEngine::Vector3  pos, ::UnityEngine::Vector3  rot, ::UnityEngine::Vector3  scale, bool  isWorldSpace, ::StringW  parentPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPosRotScaleToString*>(),
                        {"ToString", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, pos, rot, scale, isWorldSpace, parentPath);
}
inline ::StringW GlobalNamespace::GTPosRotScaleToString::ValToStr(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPosRotScaleToString*>(),
                        {"ValToStr", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, v);
}
inline bool GlobalNamespace::GTPosRotScaleToString::ParseIsWorldSpace(::StringW  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPosRotScaleToString*>(),
                        {"ParseIsWorldSpace", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, input);
}
inline ::StringW GlobalNamespace::GTPosRotScaleToString::ParseParentPath(::StringW  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPosRotScaleToString*>(),
                        {"ParseParentPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, input);
}
inline bool GlobalNamespace::GTPosRotScaleToString::TryParsePos(::StringW  input, ::by_ref<::UnityEngine::Vector3>  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPosRotScaleToString*>(),
                        {"TryParsePos", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, input, v);
}
inline bool GlobalNamespace::GTPosRotScaleToString::TryParseRot(::StringW  input, ::by_ref<::UnityEngine::Vector3>  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPosRotScaleToString*>(),
                        {"TryParseRot", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, input, v);
}
inline bool GlobalNamespace::GTPosRotScaleToString::TryParseScale(::StringW  input, ::by_ref<::UnityEngine::Vector3>  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPosRotScaleToString*>(),
                        {"TryParseScale", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, input, v);
}
inline bool GlobalNamespace::GTPosRotScaleToString::TryParseVec3(::StringW  input, ::by_ref<::UnityEngine::Vector3>  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPosRotScaleToString*>(),
                        {"TryParseVec3", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, input, v);
}
inline bool GlobalNamespace::GTPosRotScaleToString::TryParseVec3_internal(::System::Text::RegularExpressions::Regex*  regex, ::StringW  input, ::by_ref<::UnityEngine::Vector3>  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPosRotScaleToString*>(),
                        {"TryParseVec3_internal", {}, {::i2c::type_of<::System::Text::RegularExpressions::Regex*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, regex, input, v);
}
inline ::UnityEngine::Vector3 GlobalNamespace::GTPosRotScaleToString::StringToVector3(::System::Text::RegularExpressions::Match*  match)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPosRotScaleToString*>(),
                        {"StringToVector3", {}, {::i2c::type_of<::System::Text::RegularExpressions::Match*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, match);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GTPosRotScaleToString::GTPosRotScaleToString()   {
}
