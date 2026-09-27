#pragma once
// IWYU pragma private; include "GlobalNamespace/MB_ExampleMover.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MB_ExampleMover_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MB_ExampleMover.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB_ExampleMover::*)()>(&::GlobalNamespace::MB_ExampleMover::Update)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9dfd750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_ExampleMover*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB_ExampleMover._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB_ExampleMover::*)()>(&::GlobalNamespace::MB_ExampleMover::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dfd828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_ExampleMover*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::MB_ExampleMover::__cordl_internal_get_axis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axis;
}
constexpr int32_t const& GlobalNamespace::MB_ExampleMover::__cordl_internal_get_axis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axis;
}
constexpr void GlobalNamespace::MB_ExampleMover::__cordl_internal_set_axis(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___axis = value;
}
inline void GlobalNamespace::MB_ExampleMover::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_ExampleMover*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MB_ExampleMover::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_ExampleMover*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MB_ExampleMover* GlobalNamespace::MB_ExampleMover::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MB_ExampleMover*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MB_ExampleMover::MB_ExampleMover()   {
}
