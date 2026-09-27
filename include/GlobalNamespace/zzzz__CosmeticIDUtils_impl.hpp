#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticIDUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__CosmeticIDUtils_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CosmeticIDUtils.PlayFabIdToIndexInCategory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::GlobalNamespace::CosmeticIDUtils::PlayFabIdToIndexInCategory)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x565e204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticIDUtils*>(),
                        {"PlayFabIdToIndexInCategory", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticIDUtils.PlayFabIdToInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::GlobalNamespace::CosmeticIDUtils::PlayFabIdToInt)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x565e210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticIDUtils*>(),
                        {"PlayFabIdToInt", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticIDUtils._PlayFabIdToInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, int32_t)>(&::GlobalNamespace::CosmeticIDUtils::_PlayFabIdToInt)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x565e21c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticIDUtils*>(),
                        {"_PlayFabIdToInt", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticIDUtils.IntToPlayFabId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t)>(&::GlobalNamespace::CosmeticIDUtils::IntToPlayFabId)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x565e494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticIDUtils*>(),
                        {"IntToPlayFabId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::CosmeticIDUtils::PlayFabIdToIndexInCategory(::StringW  playFabIdString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticIDUtils*>(),
                        {"PlayFabIdToIndexInCategory", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, playFabIdString);
}
inline int32_t GlobalNamespace::CosmeticIDUtils::PlayFabIdToInt(::StringW  playFabIdString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticIDUtils*>(),
                        {"PlayFabIdToInt", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, playFabIdString);
}
inline int32_t GlobalNamespace::CosmeticIDUtils::_PlayFabIdToInt(::StringW  playFabIdString, int32_t  start)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticIDUtils*>(),
                        {"_PlayFabIdToInt", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, playFabIdString, start);
}
inline ::StringW GlobalNamespace::CosmeticIDUtils::IntToPlayFabId(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticIDUtils*>(),
                        {"IntToPlayFabId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, id);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CosmeticIDUtils::CosmeticIDUtils()   {
}
