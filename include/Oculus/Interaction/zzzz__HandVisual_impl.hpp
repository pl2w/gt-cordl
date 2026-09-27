#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandVisual.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/zzzz__HandVisual_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandJointId_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IHand_def.hpp"
#include "Oculus/Interaction/zzzz__HandVisual_def.hpp"
#include "Oculus/Interaction/zzzz__IHandVisual_def.hpp"
#include "Oculus/Interaction/zzzz__MaterialPropertyBlockEditor_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__SkinnedMeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Space_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::HandVisual.get_Hand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::IHand* (::Oculus::Interaction::HandVisual::*)()>(&::Oculus::Interaction::HandVisual::get_Hand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa46ecfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandVisual*>(),
                        {"get_Hand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandVisual.set_Hand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandVisual::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::HandVisual::set_Hand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa46ed04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandVisual*>(),
                        {"set_Hand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandVisual.add_WhenHandVisualUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandVisual::*)(::System::Action*)>(&::Oculus::Interaction::HandVisual::add_WhenHandVisualUpdated)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa46ed0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandVisual*>(),
                        {"add_WhenHandVisualUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandVisual.remove_WhenHandVisualUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandVisual::*)(::System::Action*)>(&::Oculus::Interaction::HandVisual::remove_WhenHandVisualUpdated)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa46eda8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandVisual*>(),
                        {"remove_WhenHandVisualUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandVisual.get_IsVisible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::HandVisual::*)()>(&::Oculus::Interaction::HandVisual::get_IsVisible)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa46ee44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandVisual*>(),
                        {"get_IsVisible", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandVisual.get_Joints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Transform>>* (::Oculus::Interaction::HandVisual::*)()>(&::Oculus::Interaction::HandVisual::get_Joints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa46eecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandVisual*>(),
                        {"get_Joints", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandVisual.get_Root
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Oculus::Interaction::HandVisual::*)()>(&::Oculus::Interaction::HandVisual::get_Root)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa46eed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandVisual*>(),
                        {"get_Root", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandVisual.set_Root
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandVisual::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::HandVisual::set_Root)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa46eedc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandVisual*>(),
                        {"set_Root", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandVisual.get_SkinnedMeshRenderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::SkinnedMeshRenderer> (::Oculus::Interaction::HandVisual::*)()>(&::Oculus::Interaction::HandVisual::get_SkinnedMeshRenderer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa46eee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandVisual*>(),
                        {"get_SkinnedMeshRenderer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandVisual.set_SkinnedMeshRenderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandVisual::*)(::UnityEngine::SkinnedMeshRenderer*)>(&::Oculus::Interaction::HandVisual::set_SkinnedMeshRenderer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa46eeec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandVisual*>(),
                        {"set_SkinnedMeshRenderer", {}, {::i2c::type_of<::UnityEngine::SkinnedMeshRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandVisual.get_HandMaterialPropertyBlockEditor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor> (::Oculus::Interaction::HandVisual::*)()>(&::Oculus::Interaction::HandVisual::get_HandMaterialPropertyBlockEditor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa46eef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandVisual*>(),
                        {"get_HandMaterialPropertyBlockEditor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandVisual.set_HandMaterialPropertyBlockEditor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandVisual::*)(::Oculus::Interaction::MaterialPropertyBlockEditor*)>(&::Oculus::Interaction::HandVisual::set_HandMaterialPropertyBlockEditor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa46eefc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandVisual*>(),
                        {"set_HandMaterialPropertyBlockEditor", {}, {::i2c::type_of<::Oculus::Interaction::MaterialPropertyBlockEditor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandVisual.get_ForceOffVisibility
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::HandVisual::*)()>(&::Oculus::Interaction::HandVisual::get_ForceOffVisibility)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa46ef04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandVisual*>(),
                        {"get_ForceOffVisibility", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandVisual.set_ForceOffVisibility
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandVisual::*)(bool)>(&::Oculus::Interaction::HandVisual::set_ForceOffVisibility)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa46ef0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandVisual*>(),
                        {"set_ForceOffVisibility", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandVisual.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandVisual::*)()>(&::Oculus::Interaction::HandVisual::Awake)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0xa46f034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandVisual*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandVisual.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandVisual::*)()>(&::Oculus::Interaction::HandVisual::Start)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa46f318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandVisual*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandVisual.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandVisual::*)()>(&::Oculus::Interaction::HandVisual::OnEnable)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa46f3cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandVisual*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandVisual.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandVisual::*)()>(&::Oculus::Interaction::HandVisual::OnDisable)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xa46f4cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandVisual*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandVisual.UpdateVisibility
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandVisual::*)()>(&::Oculus::Interaction::HandVisual::UpdateVisibility)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xa46ef20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandVisual*>(),
                        {"UpdateVisibility", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandVisual.UpdateSkeleton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandVisual::*)()>(&::Oculus::Interaction::HandVisual::UpdateSkeleton)> {
  constexpr static std::size_t size = 0x60c;
  constexpr static std::size_t addrs = 0xa46f608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandVisual*>(),
                        {"UpdateSkeleton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandVisual.GetTransformByHandJointId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Oculus::Interaction::HandVisual::*)(::Oculus::Interaction::Input::HandJointId)>(&::Oculus::Interaction::HandVisual::GetTransformByHandJointId)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa46fc14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandVisual*>(),
                        {"GetTransformByHandJointId", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandVisual.GetJointPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::HandVisual::*)(::Oculus::Interaction::Input::HandJointId, ::UnityEngine::Space)>(&::Oculus::Interaction::HandVisual::GetJointPose)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa46fcbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandVisual*>(),
                        {"GetJointPose", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>(), ::i2c::type_of<::UnityEngine::Space>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandVisual.InjectAllHandSkeletonVisual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandVisual::*)(::Oculus::Interaction::Input::IHand*, ::UnityEngine::SkinnedMeshRenderer*)>(&::Oculus::Interaction::HandVisual::InjectAllHandSkeletonVisual)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa46fd04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandVisual*>(),
                        {"InjectAllHandSkeletonVisual", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>(), ::i2c::type_of<::UnityEngine::SkinnedMeshRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandVisual.InjectHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandVisual::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::HandVisual::InjectHand)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa46fd30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandVisual*>(),
                        {"InjectHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandVisual.InjectSkinnedMeshRenderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandVisual::*)(::UnityEngine::SkinnedMeshRenderer*)>(&::Oculus::Interaction::HandVisual::InjectSkinnedMeshRenderer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa46fe00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandVisual*>(),
                        {"InjectSkinnedMeshRenderer", {}, {::i2c::type_of<::UnityEngine::SkinnedMeshRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandVisual.InjectOptionalUpdateRootPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandVisual::*)(bool)>(&::Oculus::Interaction::HandVisual::InjectOptionalUpdateRootPose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa46fe08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandVisual*>(),
                        {"InjectOptionalUpdateRootPose", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandVisual.InjectOptionalUpdateRootScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandVisual::*)(bool)>(&::Oculus::Interaction::HandVisual::InjectOptionalUpdateRootScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa46fe10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandVisual*>(),
                        {"InjectOptionalUpdateRootScale", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandVisual.InjectOptionalRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandVisual::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::HandVisual::InjectOptionalRoot)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa46fe18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandVisual*>(),
                        {"InjectOptionalRoot", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandVisual.InjectOptionalMaterialPropertyBlockEditor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandVisual::*)(::Oculus::Interaction::MaterialPropertyBlockEditor*)>(&::Oculus::Interaction::HandVisual::InjectOptionalMaterialPropertyBlockEditor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa46fe20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandVisual*>(),
                        {"InjectOptionalMaterialPropertyBlockEditor", {}, {::i2c::type_of<::Oculus::Interaction::MaterialPropertyBlockEditor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandVisual._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandVisual::*)()>(&::Oculus::Interaction::HandVisual::_ctor)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0xa46fe28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandVisual*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::HandVisual::__cordl_internal_get__hand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::HandVisual::__cordl_internal_get__hand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr void Oculus::Interaction::HandVisual::__cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hand = value;
}
constexpr ::Oculus::Interaction::Input::IHand*& Oculus::Interaction::HandVisual::__cordl_internal_get__Hand_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hand_k__BackingField;
}
constexpr ::Oculus::Interaction::Input::IHand* const& Oculus::Interaction::HandVisual::__cordl_internal_get__Hand_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hand_k__BackingField;
}
constexpr void Oculus::Interaction::HandVisual::__cordl_internal_set__Hand_k__BackingField(::Oculus::Interaction::Input::IHand*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Hand_k__BackingField = value;
}
constexpr bool& Oculus::Interaction::HandVisual::__cordl_internal_get__updateRootPose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____updateRootPose;
}
constexpr bool const& Oculus::Interaction::HandVisual::__cordl_internal_get__updateRootPose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____updateRootPose;
}
constexpr void Oculus::Interaction::HandVisual::__cordl_internal_set__updateRootPose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____updateRootPose = value;
}
constexpr bool& Oculus::Interaction::HandVisual::__cordl_internal_get__updateRootScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____updateRootScale;
}
constexpr bool const& Oculus::Interaction::HandVisual::__cordl_internal_get__updateRootScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____updateRootScale;
}
constexpr void Oculus::Interaction::HandVisual::__cordl_internal_set__updateRootScale(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____updateRootScale = value;
}
constexpr bool& Oculus::Interaction::HandVisual::__cordl_internal_get__updateVisibility()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____updateVisibility;
}
constexpr bool const& Oculus::Interaction::HandVisual::__cordl_internal_get__updateVisibility() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____updateVisibility;
}
constexpr void Oculus::Interaction::HandVisual::__cordl_internal_set__updateVisibility(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____updateVisibility = value;
}
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& Oculus::Interaction::HandVisual::__cordl_internal_get__skinnedMeshRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____skinnedMeshRenderer;
}
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& Oculus::Interaction::HandVisual::__cordl_internal_get__skinnedMeshRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____skinnedMeshRenderer;
}
constexpr void Oculus::Interaction::HandVisual::__cordl_internal_set__skinnedMeshRenderer(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____skinnedMeshRenderer = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::HandVisual::__cordl_internal_get__root()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____root;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::HandVisual::__cordl_internal_get__root() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____root;
}
constexpr void Oculus::Interaction::HandVisual::__cordl_internal_set__root(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____root = value;
}
constexpr ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>& Oculus::Interaction::HandVisual::__cordl_internal_get__handMaterialPropertyBlockEditor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handMaterialPropertyBlockEditor;
}
constexpr ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor> const& Oculus::Interaction::HandVisual::__cordl_internal_get__handMaterialPropertyBlockEditor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handMaterialPropertyBlockEditor;
}
constexpr void Oculus::Interaction::HandVisual::__cordl_internal_set__handMaterialPropertyBlockEditor(::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handMaterialPropertyBlockEditor = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& Oculus::Interaction::HandVisual::__cordl_internal_get__jointTransforms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointTransforms;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& Oculus::Interaction::HandVisual::__cordl_internal_get__jointTransforms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointTransforms;
}
constexpr void Oculus::Interaction::HandVisual::__cordl_internal_set__jointTransforms(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____jointTransforms = value;
}
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& Oculus::Interaction::HandVisual::__cordl_internal_get__openXRSkinnedMeshRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____openXRSkinnedMeshRenderer;
}
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& Oculus::Interaction::HandVisual::__cordl_internal_get__openXRSkinnedMeshRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____openXRSkinnedMeshRenderer;
}
constexpr void Oculus::Interaction::HandVisual::__cordl_internal_set__openXRSkinnedMeshRenderer(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____openXRSkinnedMeshRenderer = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::HandVisual::__cordl_internal_get__openXRRoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____openXRRoot;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::HandVisual::__cordl_internal_get__openXRRoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____openXRRoot;
}
constexpr void Oculus::Interaction::HandVisual::__cordl_internal_set__openXRRoot(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____openXRRoot = value;
}
constexpr ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>& Oculus::Interaction::HandVisual::__cordl_internal_get__openXRHandMaterialPropertyBlockEditor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____openXRHandMaterialPropertyBlockEditor;
}
constexpr ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor> const& Oculus::Interaction::HandVisual::__cordl_internal_get__openXRHandMaterialPropertyBlockEditor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____openXRHandMaterialPropertyBlockEditor;
}
constexpr void Oculus::Interaction::HandVisual::__cordl_internal_set__openXRHandMaterialPropertyBlockEditor(::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____openXRHandMaterialPropertyBlockEditor = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& Oculus::Interaction::HandVisual::__cordl_internal_get__openXRJointTransforms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____openXRJointTransforms;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& Oculus::Interaction::HandVisual::__cordl_internal_get__openXRJointTransforms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____openXRJointTransforms;
}
constexpr void Oculus::Interaction::HandVisual::__cordl_internal_set__openXRJointTransforms(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____openXRJointTransforms = value;
}
constexpr ::System::Action*& Oculus::Interaction::HandVisual::__cordl_internal_get_WhenHandVisualUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenHandVisualUpdated;
}
constexpr ::System::Action* const& Oculus::Interaction::HandVisual::__cordl_internal_get_WhenHandVisualUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenHandVisualUpdated;
}
constexpr void Oculus::Interaction::HandVisual::__cordl_internal_set_WhenHandVisualUpdated(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenHandVisualUpdated = value;
}
constexpr int32_t& Oculus::Interaction::HandVisual::__cordl_internal_get__wristScalePropertyId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wristScalePropertyId;
}
constexpr int32_t const& Oculus::Interaction::HandVisual::__cordl_internal_get__wristScalePropertyId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wristScalePropertyId;
}
constexpr void Oculus::Interaction::HandVisual::__cordl_internal_set__wristScalePropertyId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____wristScalePropertyId = value;
}
constexpr bool& Oculus::Interaction::HandVisual::__cordl_internal_get__forceOffVisibility()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____forceOffVisibility;
}
constexpr bool const& Oculus::Interaction::HandVisual::__cordl_internal_get__forceOffVisibility() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____forceOffVisibility;
}
constexpr void Oculus::Interaction::HandVisual::__cordl_internal_set__forceOffVisibility(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____forceOffVisibility = value;
}
constexpr bool& Oculus::Interaction::HandVisual::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::HandVisual::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::HandVisual::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline ::Oculus::Interaction::Input::IHand* Oculus::Interaction::HandVisual::get_Hand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandVisual*>(),
                        {"get_Hand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::IHand*>(this, ___internal_method);
}
inline void Oculus::Interaction::HandVisual::set_Hand(::Oculus::Interaction::Input::IHand*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandVisual*>(),
                        {"set_Hand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::HandVisual::add_WhenHandVisualUpdated(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandVisual*>(),
                        {"add_WhenHandVisualUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::HandVisual::remove_WhenHandVisualUpdated(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandVisual*>(),
                        {"remove_WhenHandVisualUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::HandVisual::get_IsVisible()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandVisual*>(),
                        {"get_IsVisible", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Transform>>* Oculus::Interaction::HandVisual::get_Joints()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandVisual*>(),
                        {"get_Joints", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Transform>>*>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> Oculus::Interaction::HandVisual::get_Root()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandVisual*>(),
                        {"get_Root", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void Oculus::Interaction::HandVisual::set_Root(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandVisual*>(),
                        {"set_Root", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::SkinnedMeshRenderer> Oculus::Interaction::HandVisual::get_SkinnedMeshRenderer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandVisual*>(),
                        {"get_SkinnedMeshRenderer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::SkinnedMeshRenderer>>(this, ___internal_method);
}
inline void Oculus::Interaction::HandVisual::set_SkinnedMeshRenderer(::UnityEngine::SkinnedMeshRenderer*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandVisual*>(),
                        {"set_SkinnedMeshRenderer", {}, {::i2c::type_of<::UnityEngine::SkinnedMeshRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor> Oculus::Interaction::HandVisual::get_HandMaterialPropertyBlockEditor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandVisual*>(),
                        {"get_HandMaterialPropertyBlockEditor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>>(this, ___internal_method);
}
inline void Oculus::Interaction::HandVisual::set_HandMaterialPropertyBlockEditor(::Oculus::Interaction::MaterialPropertyBlockEditor*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandVisual*>(),
                        {"set_HandMaterialPropertyBlockEditor", {}, {::i2c::type_of<::Oculus::Interaction::MaterialPropertyBlockEditor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::HandVisual::get_ForceOffVisibility()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandVisual*>(),
                        {"get_ForceOffVisibility", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::HandVisual::set_ForceOffVisibility(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandVisual*>(),
                        {"set_ForceOffVisibility", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::HandVisual::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandVisual*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandVisual::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandVisual*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandVisual::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandVisual*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandVisual::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandVisual*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandVisual::UpdateVisibility()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandVisual*>(),
                        {"UpdateVisibility", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandVisual::UpdateSkeleton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandVisual*>(),
                        {"UpdateSkeleton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> Oculus::Interaction::HandVisual::GetTransformByHandJointId(::Oculus::Interaction::Input::HandJointId  handJointId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandVisual*>(),
                        {"GetTransformByHandJointId", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method, handJointId);
}
inline ::UnityEngine::Pose Oculus::Interaction::HandVisual::GetJointPose(::Oculus::Interaction::Input::HandJointId  jointId, ::UnityEngine::Space  space)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandVisual*>(),
                        {"GetJointPose", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>(), ::i2c::type_of<::UnityEngine::Space>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, jointId, space);
}
inline void Oculus::Interaction::HandVisual::InjectAllHandSkeletonVisual(::Oculus::Interaction::Input::IHand*  hand, ::UnityEngine::SkinnedMeshRenderer*  skinnedMeshRenderer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandVisual*>(),
                        {"InjectAllHandSkeletonVisual", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>(), ::i2c::type_of<::UnityEngine::SkinnedMeshRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand, skinnedMeshRenderer);
}
inline void Oculus::Interaction::HandVisual::InjectHand(::Oculus::Interaction::Input::IHand*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandVisual*>(),
                        {"InjectHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand);
}
inline void Oculus::Interaction::HandVisual::InjectSkinnedMeshRenderer(::UnityEngine::SkinnedMeshRenderer*  skinnedMeshRenderer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandVisual*>(),
                        {"InjectSkinnedMeshRenderer", {}, {::i2c::type_of<::UnityEngine::SkinnedMeshRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, skinnedMeshRenderer);
}
inline void Oculus::Interaction::HandVisual::InjectOptionalUpdateRootPose(bool  updateRootPose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandVisual*>(),
                        {"InjectOptionalUpdateRootPose", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateRootPose);
}
inline void Oculus::Interaction::HandVisual::InjectOptionalUpdateRootScale(bool  updateRootScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandVisual*>(),
                        {"InjectOptionalUpdateRootScale", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateRootScale);
}
inline void Oculus::Interaction::HandVisual::InjectOptionalRoot(::UnityEngine::Transform*  root)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandVisual*>(),
                        {"InjectOptionalRoot", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, root);
}
inline void Oculus::Interaction::HandVisual::InjectOptionalMaterialPropertyBlockEditor(::Oculus::Interaction::MaterialPropertyBlockEditor*  editor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandVisual*>(),
                        {"InjectOptionalMaterialPropertyBlockEditor", {}, {::i2c::type_of<::Oculus::Interaction::MaterialPropertyBlockEditor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, editor);
}
inline void Oculus::Interaction::HandVisual::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandVisual*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::HandVisual* Oculus::Interaction::HandVisual::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::HandVisual*>());
}
/// @brief Convert operator to "::Oculus::Interaction::IHandVisual"
constexpr  Oculus::Interaction::HandVisual::operator ::Oculus::Interaction::IHandVisual*() noexcept {
return static_cast<::Oculus::Interaction::IHandVisual*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IHandVisual"
constexpr ::Oculus::Interaction::IHandVisual* Oculus::Interaction::HandVisual::i___Oculus__Interaction__IHandVisual() noexcept {
return static_cast<::Oculus::Interaction::IHandVisual*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::HandVisual::HandVisual()   {
}
//  Writing Method size for method: ::Oculus::Interaction::HandVisual___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandVisual___c::*)()>(&::Oculus::Interaction::HandVisual___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa470000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandVisual___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandVisual___c.__ctor_b__53_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandVisual___c::*)()>(&::Oculus::Interaction::HandVisual___c::__ctor_b__53_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa470008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandVisual___c*>(),
                        {"<.ctor>b__53_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::HandVisual___c::setStaticF___9(::Oculus::Interaction::HandVisual___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::HandVisual___c*, "<>9", ::Oculus::Interaction::HandVisual___c*>(std::forward<::Oculus::Interaction::HandVisual___c*>(value));
}
inline ::Oculus::Interaction::HandVisual___c* Oculus::Interaction::HandVisual___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::HandVisual___c*, "<>9", ::Oculus::Interaction::HandVisual___c*>();
}
inline void Oculus::Interaction::HandVisual___c::setStaticF___9__53_0(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "<>9__53_0", ::Oculus::Interaction::HandVisual___c*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* Oculus::Interaction::HandVisual___c::getStaticF___9__53_0()  {
return ::cordl_internals::getStaticField<::System::Action*, "<>9__53_0", ::Oculus::Interaction::HandVisual___c*>();
}
inline void Oculus::Interaction::HandVisual___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandVisual___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandVisual___c::__ctor_b__53_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandVisual___c*>(),
                        {"<.ctor>b__53_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::HandVisual___c* Oculus::Interaction::HandVisual___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::HandVisual___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::HandVisual___c::HandVisual___c()   {
}
