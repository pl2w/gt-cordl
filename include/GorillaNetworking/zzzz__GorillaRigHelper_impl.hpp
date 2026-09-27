#pragma once
// IWYU pragma private; include "GorillaNetworking/GorillaRigHelper.hpp"
#include "GorillaNetworking/zzzz__CosmeticsThrottler_RigDrawState_impl.hpp"
#include "GorillaNetworking/zzzz__GorillaRigHelper_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GorillaNetworking::GorillaRigHelper.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaNetworking::GorillaRigHelper::*)(::System::Object*)>(&::GorillaNetworking::GorillaRigHelper::CompareTo)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5c71954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaRigHelper>(),
                        {"CompareTo", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t GorillaNetworking::GorillaRigHelper::CompareTo(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaRigHelper>(),
                        {"CompareTo", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, obj);
}
/// @brief Convert operator to "::System::IComparable"
constexpr  GorillaNetworking::GorillaRigHelper::operator ::System::IComparable*()  {
return static_cast<::System::IComparable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable"
constexpr ::System::IComparable* GorillaNetworking::GorillaRigHelper::i___System__IComparable()  {
return static_cast<::System::IComparable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "rig", ty: "::UnityW<::GlobalNamespace::VRRig>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "state", ty: "::GlobalNamespace::CosmeticsThrottler_RigDrawState", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "sqrDistance", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "prevSqrDistance", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GorillaNetworking::GorillaRigHelper::GorillaRigHelper(::UnityW<::GlobalNamespace::VRRig>  rig, ::GlobalNamespace::CosmeticsThrottler_RigDrawState  state, float_t  sqrDistance, float_t  prevSqrDistance) noexcept  {
this->rig = rig;
this->state = state;
this->sqrDistance = sqrDistance;
this->prevSqrDistance = prevSqrDistance;
}
// Ctor Parameters []
constexpr ::GorillaNetworking::GorillaRigHelper::GorillaRigHelper()   {
}
