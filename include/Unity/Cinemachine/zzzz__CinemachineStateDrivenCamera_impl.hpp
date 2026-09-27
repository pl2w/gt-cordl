#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineStateDrivenCamera.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCameraManagerBase_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineStateDrivenCamera_Instruction_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineStateDrivenCamera_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineStateDrivenCamera_HashPair_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineStateDrivenCamera_Instruction_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineStateDrivenCamera_ParentHash_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineVirtualCameraBase_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
#include "UnityEngine/zzzz__AnimatorClipInfo_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineStateDrivenCamera.SetParentHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineStateDrivenCamera::*)(::System::Collections::Generic::List_1<::GlobalNamespace::CinemachineStateDrivenCamera_ParentHash>*)>(&::Unity::Cinemachine::CinemachineStateDrivenCamera::SetParentHash)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xae9897c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineStateDrivenCamera*>(),
                        {"SetParentHash", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::CinemachineStateDrivenCamera_ParentHash>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineStateDrivenCamera.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineStateDrivenCamera::*)()>(&::Unity::Cinemachine::CinemachineStateDrivenCamera::Reset)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xae989ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineStateDrivenCamera*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineStateDrivenCamera*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineStateDrivenCamera.PerformLegacyUpgrade
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineStateDrivenCamera::*)(int32_t)>(&::Unity::Cinemachine::CinemachineStateDrivenCamera::PerformLegacyUpgrade)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xae98a7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineStateDrivenCamera*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineStateDrivenCamera*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineStateDrivenCamera.CreateFakeHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, ::UnityEngine::AnimationClip*)>(&::Unity::Cinemachine::CinemachineStateDrivenCamera::CreateFakeHash)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xae98c04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineStateDrivenCamera*>(),
                        {"CreateFakeHash", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineStateDrivenCamera.LookupFakeHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Cinemachine::CinemachineStateDrivenCamera::*)(int32_t, ::UnityEngine::AnimationClip*)>(&::Unity::Cinemachine::CinemachineStateDrivenCamera::LookupFakeHash)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0xae98c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineStateDrivenCamera*>(),
                        {"LookupFakeHash", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineStateDrivenCamera.ValidateInstructions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineStateDrivenCamera::*)()>(&::Unity::Cinemachine::CinemachineStateDrivenCamera::ValidateInstructions)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0xae98f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineStateDrivenCamera*>(),
                        {"ValidateInstructions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineStateDrivenCamera.ChooseCurrentCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase> (::Unity::Cinemachine::CinemachineStateDrivenCamera::*)(::UnityEngine::Vector3, float_t)>(&::Unity::Cinemachine::CinemachineStateDrivenCamera::ChooseCurrentCamera)> {
  constexpr static std::size_t size = 0x5d0;
  constexpr static std::size_t addrs = 0xae99290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineStateDrivenCamera*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineStateDrivenCamera*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineStateDrivenCamera.GetClipHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Cinemachine::CinemachineStateDrivenCamera::*)(int32_t, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>*)>(&::Unity::Cinemachine::CinemachineStateDrivenCamera::GetClipHash)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0xae99860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineStateDrivenCamera*>(),
                        {"GetClipHash", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineStateDrivenCamera.CancelWait
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineStateDrivenCamera::*)()>(&::Unity::Cinemachine::CinemachineStateDrivenCamera::CancelWait)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xae999c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineStateDrivenCamera*>(),
                        {"CancelWait", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineStateDrivenCamera._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineStateDrivenCamera::*)()>(&::Unity::Cinemachine::CinemachineStateDrivenCamera::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xae99a5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineStateDrivenCamera*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Animator>& Unity::Cinemachine::CinemachineStateDrivenCamera::__cordl_internal_get_AnimatedTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AnimatedTarget;
}
constexpr ::UnityW<::UnityEngine::Animator> const& Unity::Cinemachine::CinemachineStateDrivenCamera::__cordl_internal_get_AnimatedTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AnimatedTarget;
}
constexpr void Unity::Cinemachine::CinemachineStateDrivenCamera::__cordl_internal_set_AnimatedTarget(::UnityW<::UnityEngine::Animator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AnimatedTarget = value;
}
constexpr int32_t& Unity::Cinemachine::CinemachineStateDrivenCamera::__cordl_internal_get_LayerIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LayerIndex;
}
constexpr int32_t const& Unity::Cinemachine::CinemachineStateDrivenCamera::__cordl_internal_get_LayerIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LayerIndex;
}
constexpr void Unity::Cinemachine::CinemachineStateDrivenCamera::__cordl_internal_set_LayerIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LayerIndex = value;
}
constexpr ::ArrayW<::GlobalNamespace::CinemachineStateDrivenCamera_Instruction>& Unity::Cinemachine::CinemachineStateDrivenCamera::__cordl_internal_get_Instructions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Instructions;
}
constexpr ::ArrayW<::GlobalNamespace::CinemachineStateDrivenCamera_Instruction> const& Unity::Cinemachine::CinemachineStateDrivenCamera::__cordl_internal_get_Instructions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Instructions;
}
constexpr void Unity::Cinemachine::CinemachineStateDrivenCamera::__cordl_internal_set_Instructions(::ArrayW<::GlobalNamespace::CinemachineStateDrivenCamera_Instruction>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Instructions = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CinemachineStateDrivenCamera_ParentHash>*& Unity::Cinemachine::CinemachineStateDrivenCamera::__cordl_internal_get_HashOfParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HashOfParent;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CinemachineStateDrivenCamera_ParentHash>* const& Unity::Cinemachine::CinemachineStateDrivenCamera::__cordl_internal_get_HashOfParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HashOfParent;
}
constexpr void Unity::Cinemachine::CinemachineStateDrivenCamera::__cordl_internal_set_HashOfParent(::System::Collections::Generic::List_1<::GlobalNamespace::CinemachineStateDrivenCamera_ParentHash>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HashOfParent = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Unity::Cinemachine::CinemachineStateDrivenCamera::__cordl_internal_get_m_LegacyLookAt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LegacyLookAt;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Unity::Cinemachine::CinemachineStateDrivenCamera::__cordl_internal_get_m_LegacyLookAt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LegacyLookAt;
}
constexpr void Unity::Cinemachine::CinemachineStateDrivenCamera::__cordl_internal_set_m_LegacyLookAt(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LegacyLookAt = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Unity::Cinemachine::CinemachineStateDrivenCamera::__cordl_internal_get_m_LegacyFollow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LegacyFollow;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Unity::Cinemachine::CinemachineStateDrivenCamera::__cordl_internal_get_m_LegacyFollow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LegacyFollow;
}
constexpr void Unity::Cinemachine::CinemachineStateDrivenCamera::__cordl_internal_set_m_LegacyFollow(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LegacyFollow = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineStateDrivenCamera::__cordl_internal_get_m_ActivationTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActivationTime;
}
constexpr float_t const& Unity::Cinemachine::CinemachineStateDrivenCamera::__cordl_internal_get_m_ActivationTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActivationTime;
}
constexpr void Unity::Cinemachine::CinemachineStateDrivenCamera::__cordl_internal_set_m_ActivationTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ActivationTime = value;
}
constexpr int32_t& Unity::Cinemachine::CinemachineStateDrivenCamera::__cordl_internal_get_m_ActiveInstructionIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActiveInstructionIndex;
}
constexpr int32_t const& Unity::Cinemachine::CinemachineStateDrivenCamera::__cordl_internal_get_m_ActiveInstructionIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActiveInstructionIndex;
}
constexpr void Unity::Cinemachine::CinemachineStateDrivenCamera::__cordl_internal_set_m_ActiveInstructionIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ActiveInstructionIndex = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineStateDrivenCamera::__cordl_internal_get_m_PendingActivationTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PendingActivationTime;
}
constexpr float_t const& Unity::Cinemachine::CinemachineStateDrivenCamera::__cordl_internal_get_m_PendingActivationTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PendingActivationTime;
}
constexpr void Unity::Cinemachine::CinemachineStateDrivenCamera::__cordl_internal_set_m_PendingActivationTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PendingActivationTime = value;
}
constexpr int32_t& Unity::Cinemachine::CinemachineStateDrivenCamera::__cordl_internal_get_m_PendingInstructionIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PendingInstructionIndex;
}
constexpr int32_t const& Unity::Cinemachine::CinemachineStateDrivenCamera::__cordl_internal_get_m_PendingInstructionIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PendingInstructionIndex;
}
constexpr void Unity::Cinemachine::CinemachineStateDrivenCamera::__cordl_internal_set_m_PendingInstructionIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PendingInstructionIndex = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<int32_t>*>*& Unity::Cinemachine::CinemachineStateDrivenCamera::__cordl_internal_get_m_InstructionDictionary()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InstructionDictionary;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<int32_t>*>* const& Unity::Cinemachine::CinemachineStateDrivenCamera::__cordl_internal_get_m_InstructionDictionary() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InstructionDictionary;
}
constexpr void Unity::Cinemachine::CinemachineStateDrivenCamera::__cordl_internal_set_m_InstructionDictionary(::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<int32_t>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InstructionDictionary = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*& Unity::Cinemachine::CinemachineStateDrivenCamera::__cordl_internal_get_m_StateParentLookup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StateParentLookup;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* const& Unity::Cinemachine::CinemachineStateDrivenCamera::__cordl_internal_get_m_StateParentLookup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StateParentLookup;
}
constexpr void Unity::Cinemachine::CinemachineStateDrivenCamera::__cordl_internal_set_m_StateParentLookup(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_StateParentLookup = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>*& Unity::Cinemachine::CinemachineStateDrivenCamera::__cordl_internal_get_m_ClipInfoList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ClipInfoList;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>* const& Unity::Cinemachine::CinemachineStateDrivenCamera::__cordl_internal_get_m_ClipInfoList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ClipInfoList;
}
constexpr void Unity::Cinemachine::CinemachineStateDrivenCamera::__cordl_internal_set_m_ClipInfoList(::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ClipInfoList = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::AnimationClip>,::System::Collections::Generic::List_1<::GlobalNamespace::CinemachineStateDrivenCamera_HashPair>*>*& Unity::Cinemachine::CinemachineStateDrivenCamera::__cordl_internal_get_m_HashCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HashCache;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::AnimationClip>,::System::Collections::Generic::List_1<::GlobalNamespace::CinemachineStateDrivenCamera_HashPair>*>* const& Unity::Cinemachine::CinemachineStateDrivenCamera::__cordl_internal_get_m_HashCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HashCache;
}
constexpr void Unity::Cinemachine::CinemachineStateDrivenCamera::__cordl_internal_set_m_HashCache(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::AnimationClip>,::System::Collections::Generic::List_1<::GlobalNamespace::CinemachineStateDrivenCamera_HashPair>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HashCache = value;
}
inline void Unity::Cinemachine::CinemachineStateDrivenCamera::SetParentHash(::System::Collections::Generic::List_1<::GlobalNamespace::CinemachineStateDrivenCamera_ParentHash>*  list)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineStateDrivenCamera*>(),
                        {"SetParentHash", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::CinemachineStateDrivenCamera_ParentHash>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, list);
}
inline void Unity::Cinemachine::CinemachineStateDrivenCamera::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineStateDrivenCamera*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineStateDrivenCamera::PerformLegacyUpgrade(int32_t  streamedVersion)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineStateDrivenCamera*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, streamedVersion);
}
inline int32_t Unity::Cinemachine::CinemachineStateDrivenCamera::CreateFakeHash(int32_t  parentHash, ::UnityEngine::AnimationClip*  clip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineStateDrivenCamera*>(),
                        {"CreateFakeHash", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, parentHash, clip);
}
inline int32_t Unity::Cinemachine::CinemachineStateDrivenCamera::LookupFakeHash(int32_t  parentHash, ::UnityEngine::AnimationClip*  clip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineStateDrivenCamera*>(),
                        {"LookupFakeHash", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, parentHash, clip);
}
inline void Unity::Cinemachine::CinemachineStateDrivenCamera::ValidateInstructions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineStateDrivenCamera*>(),
                        {"ValidateInstructions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase> Unity::Cinemachine::CinemachineStateDrivenCamera::ChooseCurrentCamera(::UnityEngine::Vector3  worldUp, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineStateDrivenCamera*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>(this, ___internal_method, worldUp, deltaTime);
}
inline int32_t Unity::Cinemachine::CinemachineStateDrivenCamera::GetClipHash(int32_t  hash, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>*  clips)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineStateDrivenCamera*>(),
                        {"GetClipHash", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, hash, clips);
}
inline void Unity::Cinemachine::CinemachineStateDrivenCamera::CancelWait()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineStateDrivenCamera*>(),
                        {"CancelWait", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineStateDrivenCamera::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineStateDrivenCamera*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineStateDrivenCamera* Unity::Cinemachine::CinemachineStateDrivenCamera::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineStateDrivenCamera*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineStateDrivenCamera::CinemachineStateDrivenCamera()   {
}
