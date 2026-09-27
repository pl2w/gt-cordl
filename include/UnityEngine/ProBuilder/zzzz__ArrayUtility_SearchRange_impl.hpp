#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/ArrayUtility_SearchRange.hpp"
#include "UnityEngine/ProBuilder/zzzz__ArrayUtility_SearchRange_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ArrayUtility_SearchRange._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArrayUtility_SearchRange::*)(int32_t, int32_t)>(&::GlobalNamespace::ArrayUtility_SearchRange::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb083070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArrayUtility_SearchRange>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArrayUtility_SearchRange.Valid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ArrayUtility_SearchRange::*)()>(&::GlobalNamespace::ArrayUtility_SearchRange::Valid)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb083078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArrayUtility_SearchRange>(),
                        {"Valid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArrayUtility_SearchRange.Center
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ArrayUtility_SearchRange::*)()>(&::GlobalNamespace::ArrayUtility_SearchRange::Center)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb08308c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArrayUtility_SearchRange>(),
                        {"Center", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArrayUtility_SearchRange.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::ArrayUtility_SearchRange::*)()>(&::GlobalNamespace::ArrayUtility_SearchRange::ToString)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0xb0830a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ArrayUtility_SearchRange>(),
                    {::i2c::class_of<::GlobalNamespace::ArrayUtility_SearchRange>(), 3}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ArrayUtility_SearchRange::_ctor(int32_t  begin, int32_t  end)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArrayUtility_SearchRange>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, begin, end);
}
inline bool GlobalNamespace::ArrayUtility_SearchRange::Valid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArrayUtility_SearchRange>(),
                        {"Valid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::ArrayUtility_SearchRange::Center()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArrayUtility_SearchRange>(),
                        {"Center", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::ArrayUtility_SearchRange::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ArrayUtility_SearchRange>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "begin", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "end", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ArrayUtility_SearchRange::ArrayUtility_SearchRange(int32_t  begin, int32_t  end) noexcept  {
this->begin = begin;
this->end = end;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ArrayUtility_SearchRange::ArrayUtility_SearchRange()   {
}
