#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/HullData.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Technie/PhysicsCreator/zzzz__HullData_def.hpp"
//  Writing Method size for method: ::Technie::PhysicsCreator::HullData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::HullData::*)()>(&::Technie::PhysicsCreator::HullData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadcd41c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::HullData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Technie::PhysicsCreator::HullData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::HullData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Technie::PhysicsCreator::HullData* Technie::PhysicsCreator::HullData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Technie::PhysicsCreator::HullData*>());
}
// Ctor Parameters []
constexpr ::Technie::PhysicsCreator::HullData::HullData()   {
}
