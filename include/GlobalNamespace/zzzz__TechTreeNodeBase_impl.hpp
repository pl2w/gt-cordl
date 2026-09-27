#pragma once
// IWYU pragma private; include "GlobalNamespace/TechTreeNodeBase.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "XNode/zzzz__Node_impl.hpp"
#include "GlobalNamespace/zzzz__TechTreeNodeBase_def.hpp"
#include "GlobalNamespace/zzzz__TechTreeNodeBase_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TechTreeNodeBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TechTreeNodeBase::*)()>(&::GlobalNamespace::TechTreeNodeBase::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59d92dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TechTreeNodeBase*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::TechTreeNodeBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TechTreeNodeBase*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TechTreeNodeBase* GlobalNamespace::TechTreeNodeBase::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TechTreeNodeBase*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TechTreeNodeBase::TechTreeNodeBase()   {
}
//  Writing Method size for method: ::GlobalNamespace::TechTreeNodeBase_Empty._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TechTreeNodeBase_Empty::*)()>(&::GlobalNamespace::TechTreeNodeBase_Empty::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59d9674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TechTreeNodeBase_Empty*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::TechTreeNodeBase_Empty::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TechTreeNodeBase_Empty*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TechTreeNodeBase_Empty* GlobalNamespace::TechTreeNodeBase_Empty::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TechTreeNodeBase_Empty*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TechTreeNodeBase_Empty::TechTreeNodeBase_Empty()   {
}
