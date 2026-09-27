#pragma once
// IWYU pragma private; include "GorillaTag/GuidedRefs/GuidedRefIdBaseSO.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GorillaTag/GuidedRefs/zzzz__GuidedRefIdBaseSO_def.hpp"
#include "GorillaTag/GuidedRefs/zzzz__IGuidedRefObject_def.hpp"
//  Writing Method size for method: ::GorillaTag::GuidedRefs::GuidedRefIdBaseSO.GuidedRefInitialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::GuidedRefs::GuidedRefIdBaseSO::*)()>(&::GorillaTag::GuidedRefs::GuidedRefIdBaseSO::GuidedRefInitialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d45408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::GuidedRefs::GuidedRefIdBaseSO*>(),
                    {::i2c::class_of<::GorillaTag::GuidedRefs::GuidedRefIdBaseSO*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::GuidedRefs::GuidedRefIdBaseSO._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::GuidedRefs::GuidedRefIdBaseSO::*)()>(&::GorillaTag::GuidedRefs::GuidedRefIdBaseSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d45400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GuidedRefs::GuidedRefIdBaseSO*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::GuidedRefs::GuidedRefIdBaseSO.GorillaTag_GuidedRefs_IGuidedRefObject_GetInstanceID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaTag::GuidedRefs::GuidedRefIdBaseSO::*)()>(&::GorillaTag::GuidedRefs::GuidedRefIdBaseSO::GorillaTag_GuidedRefs_IGuidedRefObject_GetInstanceID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d4540c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GuidedRefs::GuidedRefIdBaseSO*>(),
                        {"GorillaTag.GuidedRefs.IGuidedRefObject.GetInstanceID", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaTag::GuidedRefs::GuidedRefIdBaseSO::GuidedRefInitialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::GuidedRefs::GuidedRefIdBaseSO*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::GuidedRefs::GuidedRefIdBaseSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GuidedRefs::GuidedRefIdBaseSO*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GorillaTag::GuidedRefs::GuidedRefIdBaseSO::GorillaTag_GuidedRefs_IGuidedRefObject_GetInstanceID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GuidedRefs::GuidedRefIdBaseSO*>(),
                        {"GorillaTag.GuidedRefs.IGuidedRefObject.GetInstanceID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::GorillaTag::GuidedRefs::GuidedRefIdBaseSO* GorillaTag::GuidedRefs::GuidedRefIdBaseSO::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::GuidedRefs::GuidedRefIdBaseSO*>());
}
/// @brief Convert operator to "::GorillaTag::GuidedRefs::IGuidedRefObject"
constexpr  GorillaTag::GuidedRefs::GuidedRefIdBaseSO::operator ::GorillaTag::GuidedRefs::IGuidedRefObject*() noexcept {
return static_cast<::GorillaTag::GuidedRefs::IGuidedRefObject*>(static_cast<void*>(this));
}
/// @brief Convert to "::GorillaTag::GuidedRefs::IGuidedRefObject"
constexpr ::GorillaTag::GuidedRefs::IGuidedRefObject* GorillaTag::GuidedRefs::GuidedRefIdBaseSO::i___GorillaTag__GuidedRefs__IGuidedRefObject() noexcept {
return static_cast<::GorillaTag::GuidedRefs::IGuidedRefObject*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTag::GuidedRefs::GuidedRefIdBaseSO::GuidedRefIdBaseSO()   {
}
