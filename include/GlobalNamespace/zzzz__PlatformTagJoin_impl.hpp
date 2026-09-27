#pragma once
// IWYU pragma private; include "GlobalNamespace/PlatformTagJoin.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__PlatformTagJoin_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlatformTagJoin.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PlatformTagJoin::*)()>(&::GlobalNamespace::PlatformTagJoin::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x568e418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PlatformTagJoin*>(),
                    {::i2c::class_of<::GlobalNamespace::PlatformTagJoin*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformTagJoin._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformTagJoin::*)()>(&::GlobalNamespace::PlatformTagJoin::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x568e420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlatformTagJoin*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::PlatformTagJoin::__cordl_internal_get_PlatformTag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlatformTag;
}
constexpr ::StringW const& GlobalNamespace::PlatformTagJoin::__cordl_internal_get_PlatformTag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlatformTag;
}
constexpr void GlobalNamespace::PlatformTagJoin::__cordl_internal_set_PlatformTag(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlatformTag = value;
}
inline ::StringW GlobalNamespace::PlatformTagJoin::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PlatformTagJoin*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::PlatformTagJoin::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlatformTagJoin*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlatformTagJoin* GlobalNamespace::PlatformTagJoin::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlatformTagJoin*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlatformTagJoin::PlatformTagJoin()   {
}
