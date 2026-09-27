#pragma once
// IWYU pragma private; include "Fusion/NetworkObject.hpp"
#include "Fusion/zzzz__Behaviour_impl.hpp"
#include "Fusion/zzzz__NetworkBehaviour_impl.hpp"
#include "Fusion/zzzz__NetworkObjectFlags_impl.hpp"
#include "Fusion/zzzz__NetworkObjectRuntimeFlags_impl.hpp"
#include "Fusion/zzzz__NetworkObjectTypeId_impl.hpp"
#include "Fusion/zzzz__NetworkObject_ObjectInterestModes_impl.hpp"
#include "Fusion/zzzz__RenderSource_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Fusion/zzzz__NetworkObject_def.hpp"
#include "Fusion/zzzz__NetworkId_def.hpp"
#include "Fusion/zzzz__NetworkObjectHeaderPtr_def.hpp"
#include "Fusion/zzzz__NetworkObjectHeader_def.hpp"
#include "Fusion/zzzz__NetworkObjectMeta_def.hpp"
#include "Fusion/zzzz__NetworkObject_ObjectInterestModes_def.hpp"
#include "Fusion/zzzz__NetworkObject_def.hpp"
#include "Fusion/zzzz__NetworkRunner_def.hpp"
#include "Fusion/zzzz__PlayerRef_def.hpp"
#include "Fusion/zzzz__PriorityLevel_def.hpp"
#include "Fusion/zzzz__RenderSource_def.hpp"
#include "Fusion/zzzz__RenderTimeframe_def.hpp"
#include "Fusion/zzzz__Simulation_def.hpp"
#include "Fusion/zzzz__Tick_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkObject.get_Id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkId (::Fusion::NetworkObject::*)()>(&::Fusion::NetworkObject::get_Id)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5fa807c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"get_Id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObject.get_Runner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Fusion::NetworkRunner> (::Fusion::NetworkObject::*)()>(&::Fusion::NetworkObject::get_Runner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fa8094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"get_Runner", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObject.get_LastReceiveTick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Tick (::Fusion::NetworkObject::*)()>(&::Fusion::NetworkObject::get_LastReceiveTick)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fa809c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"get_LastReceiveTick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObject.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::NetworkObject::*)()>(&::Fusion::NetworkObject::get_Name)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5fa80bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"get_Name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObject.get_Simulation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Simulation* (::Fusion::NetworkObject::*)()>(&::Fusion::NetworkObject::get_Simulation)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5fa81b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"get_Simulation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObject.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkObject::*)()>(&::Fusion::NetworkObject::get_IsValid)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5fa822c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"get_IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObject.get_IsInSimulation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkObject::*)()>(&::Fusion::NetworkObject::get_IsInSimulation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fa82b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"get_IsInSimulation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObject.get_Header
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Fusion::NetworkObjectHeader> (::Fusion::NetworkObject::*)()>(&::Fusion::NetworkObject::get_Header)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fa82c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"get_Header", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObject.get_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Span_1<int32_t> (::Fusion::NetworkObject::*)()>(&::Fusion::NetworkObject::get_Data)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5fa82c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"get_Data", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObject.get_BehaviourChangedTickArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlySpan_1<int32_t> (::Fusion::NetworkObject::*)()>(&::Fusion::NetworkObject::get_BehaviourChangedTickArray)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5fa833c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"get_BehaviourChangedTickArray", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObject.get_HasInputAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkObject::*)()>(&::Fusion::NetworkObject::get_HasInputAuthority)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5fa844c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"get_HasInputAuthority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObject.get_HasStateAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkObject::*)()>(&::Fusion::NetworkObject::get_HasStateAuthority)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5fa8518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"get_HasStateAuthority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObject.get_IsProxy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkObject::*)()>(&::Fusion::NetworkObject::get_IsProxy)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5fa859c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"get_IsProxy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObject.get_IsNested
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkObject::*)()>(&::Fusion::NetworkObject::get_IsNested)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fa86e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"get_IsNested", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObject.get_NestingRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Fusion::NetworkObject> (::Fusion::NetworkObject::*)()>(&::Fusion::NetworkObject::get_NestingRoot)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5fa86ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"get_NestingRoot", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObject.get_RenderTimeframe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::RenderTimeframe (::Fusion::NetworkObject::*)()>(&::Fusion::NetworkObject::get_RenderTimeframe)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5fa8788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"get_RenderTimeframe", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObject.get_RenderSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::RenderSource (::Fusion::NetworkObject::*)()>(&::Fusion::NetworkObject::get_RenderSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fa8828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"get_RenderSource", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObject.set_RenderSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObject::*)(::Fusion::RenderSource)>(&::Fusion::NetworkObject::set_RenderSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fa8830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"set_RenderSource", {}, {::i2c::type_of<::Fusion::RenderSource>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObject.get_RenderTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Fusion::NetworkObject::*)()>(&::Fusion::NetworkObject::get_RenderTime)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5fa8838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"get_RenderTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObject.get_InputAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::PlayerRef (::Fusion::NetworkObject::*)()>(&::Fusion::NetworkObject::get_InputAuthority)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5fa88e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"get_InputAuthority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObject.get_StateAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::PlayerRef (::Fusion::NetworkObject::*)()>(&::Fusion::NetworkObject::get_StateAuthority)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5fa8944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"get_StateAuthority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObject.get_IsSpawnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkObject::*)()>(&::Fusion::NetworkObject::get_IsSpawnable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5fa89c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"get_IsSpawnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObject.set_IsSpawnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObject::*)(bool)>(&::Fusion::NetworkObject::set_IsSpawnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fa89d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"set_IsSpawnable", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObject.PrepareBehaviourOrder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObject::*)()>(&::Fusion::NetworkObject::PrepareBehaviourOrder)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x5fa89dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"PrepareBehaviourOrder", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObject.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObject::*)()>(&::Fusion::NetworkObject::Awake)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5fa8c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkObject*>(),
                    {::i2c::class_of<::Fusion::NetworkObject*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObject.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObject::*)()>(&::Fusion::NetworkObject::OnDestroy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fa8ea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkObject*>(),
                    {::i2c::class_of<::Fusion::NetworkObject*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObject.OnDestroyNeverActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObject::*)()>(&::Fusion::NetworkObject::OnDestroyNeverActive)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5fa91e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"OnDestroyNeverActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObject.OnDestroyInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObject::*)()>(&::Fusion::NetworkObject::OnDestroyInternal)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x5fa8ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"OnDestroyInternal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObject.ResetNetworkState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObject::*)()>(&::Fusion::NetworkObject::ResetNetworkState)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5fa9320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"ResetNetworkState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObject.Defaults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObject::*)()>(&::Fusion::NetworkObject::Defaults)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5fa9354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"Defaults", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObject.GetWordCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Fusion::NetworkObject*)>(&::Fusion::NetworkObject::GetWordCount)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5fa9388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"GetWordCount", {}, {::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObject.GetLocalAuthorityMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkObject::*)()>(&::Fusion::NetworkObject::GetLocalAuthorityMask)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5fa9510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"GetLocalAuthorityMask", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObject.AssignInputAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObject::*)(::Fusion::PlayerRef)>(&::Fusion::NetworkObject::AssignInputAuthority)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x5fa9538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"AssignInputAuthority", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObject.RequestStateAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObject::*)()>(&::Fusion::NetworkObject::RequestStateAuthority)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5fa9794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"RequestStateAuthority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObject.ReleaseStateAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObject::*)()>(&::Fusion::NetworkObject::ReleaseStateAuthority)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5fa987c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"ReleaseStateAuthority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObject.RemoveInputAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObject::*)()>(&::Fusion::NetworkObject::RemoveInputAuthority)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fa9964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"RemoveInputAuthority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObject.op_Implicit___Fusion__NetworkId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkId (*)(::Fusion::NetworkObject*)>(&::Fusion::NetworkObject::op_Implicit___Fusion__NetworkId)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fa996c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObject.SetPlayerAlwaysInterested
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObject::*)(::Fusion::PlayerRef, bool)>(&::Fusion::NetworkObject::SetPlayerAlwaysInterested)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5fa9988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"SetPlayerAlwaysInterested", {}, {::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObject.CopyStateFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObject::*)(::Fusion::NetworkObject*)>(&::Fusion::NetworkObject::CopyStateFrom)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x5fa99f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"CopyStateFrom", {}, {::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObject.CopyStateFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObject::*)(::Fusion::NetworkObjectHeaderPtr)>(&::Fusion::NetworkObject::CopyStateFrom)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5fa9c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"CopyStateFrom", {}, {::i2c::type_of<::Fusion::NetworkObjectHeaderPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObject.NetworkWrap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkId (*)(::Fusion::NetworkRunner*, ::Fusion::NetworkObject*)>(&::Fusion::NetworkObject::NetworkWrap)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5fa9e2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"NetworkWrap", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObject.NetworkWrap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkId (*)(::Fusion::NetworkObject*)>(&::Fusion::NetworkObject::NetworkWrap)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5fa9e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"NetworkWrap", {}, {::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObject.NetworkUnwrap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::NetworkRunner*, ::Fusion::NetworkId, ::by_ref<::Fusion::NetworkObject*>)>(&::Fusion::NetworkObject::NetworkUnwrap)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5fa9e74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"NetworkUnwrap", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<::by_ref<::Fusion::NetworkObject*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObject.MakeOwned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObject::*)(::Fusion::NetworkRunner*)>(&::Fusion::NetworkObject::MakeOwned)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5fa9f3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"MakeOwned", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObject.MakeUnowned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObject::*)()>(&::Fusion::NetworkObject::MakeUnowned)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fa9ff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"MakeUnowned", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObject.DebugAwake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObject::*)()>(&::Fusion::NetworkObject::DebugAwake)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5fa8d98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"DebugAwake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObject.DebugOnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObject::*)(bool)>(&::Fusion::NetworkObject::DebugOnDestroy)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5fa909c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"DebugOnDestroy", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObject.GetDumpString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObject::*)(::System::Text::StringBuilder*)>(&::Fusion::NetworkObject::GetDumpString)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5faa000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkObject*>(),
                    {::i2c::class_of<::Fusion::NetworkObject*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObject::*)()>(&::Fusion::NetworkObject::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5faa1c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t*& Fusion::NetworkObject::__cordl_internal_get_Ptr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Ptr;
}
constexpr int32_t* const& Fusion::NetworkObject::__cordl_internal_get_Ptr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Ptr;
}
constexpr void Fusion::NetworkObject::__cordl_internal_set_Ptr(int32_t*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Ptr = value;
}
constexpr bool& Fusion::NetworkObject::__cordl_internal_get_IsResume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsResume;
}
constexpr bool const& Fusion::NetworkObject::__cordl_internal_get_IsResume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsResume;
}
constexpr void Fusion::NetworkObject::__cordl_internal_set_IsResume(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsResume = value;
}
constexpr ::UnityW<::Fusion::NetworkRunner>& Fusion::NetworkObject::__cordl_internal_get__runner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____runner;
}
constexpr ::UnityW<::Fusion::NetworkRunner> const& Fusion::NetworkObject::__cordl_internal_get__runner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____runner;
}
constexpr void Fusion::NetworkObject::__cordl_internal_set__runner(::UnityW<::Fusion::NetworkRunner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____runner = value;
}
constexpr ::Fusion::NetworkObjectMeta*& Fusion::NetworkObject::__cordl_internal_get_Meta()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Meta;
}
constexpr ::Fusion::NetworkObjectMeta* const& Fusion::NetworkObject::__cordl_internal_get_Meta() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Meta;
}
constexpr void Fusion::NetworkObject::__cordl_internal_set_Meta(::Fusion::NetworkObjectMeta*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Meta = value;
}
constexpr uint32_t& Fusion::NetworkObject::__cordl_internal_get_SortKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SortKey;
}
constexpr uint32_t const& Fusion::NetworkObject::__cordl_internal_get_SortKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SortKey;
}
constexpr void Fusion::NetworkObject::__cordl_internal_set_SortKey(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SortKey = value;
}
constexpr ::Fusion::NetworkObject_ReplicateToDelegate*& Fusion::NetworkObject::__cordl_internal_get_ReplicateTo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReplicateTo;
}
constexpr ::Fusion::NetworkObject_ReplicateToDelegate* const& Fusion::NetworkObject::__cordl_internal_get_ReplicateTo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReplicateTo;
}
constexpr void Fusion::NetworkObject::__cordl_internal_set_ReplicateTo(::Fusion::NetworkObject_ReplicateToDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ReplicateTo = value;
}
constexpr ::Fusion::NetworkObject_PriorityLevelDelegate*& Fusion::NetworkObject::__cordl_internal_get_PriorityCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PriorityCallback;
}
constexpr ::Fusion::NetworkObject_PriorityLevelDelegate* const& Fusion::NetworkObject::__cordl_internal_get_PriorityCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PriorityCallback;
}
constexpr void Fusion::NetworkObject::__cordl_internal_set_PriorityCallback(::Fusion::NetworkObject_PriorityLevelDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PriorityCallback = value;
}
constexpr ::GlobalNamespace::NetworkObject_ObjectInterestModes& Fusion::NetworkObject::__cordl_internal_get_ObjectInterest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ObjectInterest;
}
constexpr ::GlobalNamespace::NetworkObject_ObjectInterestModes const& Fusion::NetworkObject::__cordl_internal_get_ObjectInterest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ObjectInterest;
}
constexpr void Fusion::NetworkObject::__cordl_internal_set_ObjectInterest(::GlobalNamespace::NetworkObject_ObjectInterestModes  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ObjectInterest = value;
}
constexpr ::Fusion::NetworkObjectFlags& Fusion::NetworkObject::__cordl_internal_get_Flags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Flags;
}
constexpr ::Fusion::NetworkObjectFlags const& Fusion::NetworkObject::__cordl_internal_get_Flags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Flags;
}
constexpr void Fusion::NetworkObject::__cordl_internal_set_Flags(::Fusion::NetworkObjectFlags  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Flags = value;
}
constexpr ::Fusion::NetworkObjectRuntimeFlags& Fusion::NetworkObject::__cordl_internal_get_RuntimeFlags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RuntimeFlags;
}
constexpr ::Fusion::NetworkObjectRuntimeFlags const& Fusion::NetworkObject::__cordl_internal_get_RuntimeFlags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RuntimeFlags;
}
constexpr void Fusion::NetworkObject::__cordl_internal_set_RuntimeFlags(::Fusion::NetworkObjectRuntimeFlags  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RuntimeFlags = value;
}
constexpr ::Fusion::NetworkObjectTypeId& Fusion::NetworkObject::__cordl_internal_get_NetworkTypeId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NetworkTypeId;
}
constexpr ::Fusion::NetworkObjectTypeId const& Fusion::NetworkObject::__cordl_internal_get_NetworkTypeId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NetworkTypeId;
}
constexpr void Fusion::NetworkObject::__cordl_internal_set_NetworkTypeId(::Fusion::NetworkObjectTypeId  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NetworkTypeId = value;
}
constexpr ::ArrayW<::UnityW<::Fusion::NetworkObject>>& Fusion::NetworkObject::__cordl_internal_get_NestedObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NestedObjects;
}
constexpr ::ArrayW<::UnityW<::Fusion::NetworkObject>> const& Fusion::NetworkObject::__cordl_internal_get_NestedObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NestedObjects;
}
constexpr void Fusion::NetworkObject::__cordl_internal_set_NestedObjects(::ArrayW<::UnityW<::Fusion::NetworkObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NestedObjects = value;
}
constexpr ::ArrayW<::UnityW<::Fusion::NetworkBehaviour>>& Fusion::NetworkObject::__cordl_internal_get_NetworkedBehaviours()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NetworkedBehaviours;
}
constexpr ::ArrayW<::UnityW<::Fusion::NetworkBehaviour>> const& Fusion::NetworkObject::__cordl_internal_get_NetworkedBehaviours() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NetworkedBehaviours;
}
constexpr void Fusion::NetworkObject::__cordl_internal_set_NetworkedBehaviours(::ArrayW<::UnityW<::Fusion::NetworkBehaviour>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NetworkedBehaviours = value;
}
constexpr ::Fusion::RenderSource& Fusion::NetworkObject::__cordl_internal_get__renderSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderSource;
}
constexpr ::Fusion::RenderSource const& Fusion::NetworkObject::__cordl_internal_get__renderSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderSource;
}
constexpr void Fusion::NetworkObject::__cordl_internal_set__renderSource(::Fusion::RenderSource  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____renderSource = value;
}
constexpr bool& Fusion::NetworkObject::__cordl_internal_get_ForceRemoteRenderTimeframe()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ForceRemoteRenderTimeframe;
}
constexpr bool const& Fusion::NetworkObject::__cordl_internal_get_ForceRemoteRenderTimeframe() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ForceRemoteRenderTimeframe;
}
constexpr void Fusion::NetworkObject::__cordl_internal_set_ForceRemoteRenderTimeframe(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ForceRemoteRenderTimeframe = value;
}
inline ::Fusion::NetworkId Fusion::NetworkObject::get_Id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"get_Id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkId>(this, ___internal_method);
}
inline ::UnityW<::Fusion::NetworkRunner> Fusion::NetworkObject::get_Runner()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"get_Runner", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Fusion::NetworkRunner>>(this, ___internal_method);
}
inline ::Fusion::Tick Fusion::NetworkObject::get_LastReceiveTick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"get_LastReceiveTick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Tick>(this, ___internal_method);
}
inline ::StringW Fusion::NetworkObject::get_Name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"get_Name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Fusion::Simulation* Fusion::NetworkObject::get_Simulation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"get_Simulation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Simulation*>(this, ___internal_method);
}
inline bool Fusion::NetworkObject::get_IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"get_IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Fusion::NetworkObject::get_IsInSimulation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"get_IsInSimulation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::by_ref<::Fusion::NetworkObjectHeader> Fusion::NetworkObject::get_Header()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"get_Header", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Fusion::NetworkObjectHeader>>(this, ___internal_method);
}
inline ::System::Span_1<int32_t> Fusion::NetworkObject::get_Data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"get_Data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Span_1<int32_t>>(this, ___internal_method);
}
inline ::System::ReadOnlySpan_1<int32_t> Fusion::NetworkObject::get_BehaviourChangedTickArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"get_BehaviourChangedTickArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<int32_t>>(this, ___internal_method);
}
inline bool Fusion::NetworkObject::get_HasInputAuthority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"get_HasInputAuthority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Fusion::NetworkObject::get_HasStateAuthority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"get_HasStateAuthority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Fusion::NetworkObject::get_IsProxy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"get_IsProxy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Fusion::NetworkObject::get_IsNested()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"get_IsNested", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::Fusion::NetworkObject> Fusion::NetworkObject::get_NestingRoot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"get_NestingRoot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Fusion::NetworkObject>>(this, ___internal_method);
}
inline ::Fusion::RenderTimeframe Fusion::NetworkObject::get_RenderTimeframe()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"get_RenderTimeframe", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::RenderTimeframe>(this, ___internal_method);
}
inline ::Fusion::RenderSource Fusion::NetworkObject::get_RenderSource()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"get_RenderSource", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::RenderSource>(this, ___internal_method);
}
inline void Fusion::NetworkObject::set_RenderSource(::Fusion::RenderSource  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"set_RenderSource", {}, {::i2c::type_of<::Fusion::RenderSource>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Fusion::NetworkObject::get_RenderTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"get_RenderTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::Fusion::PlayerRef Fusion::NetworkObject::get_InputAuthority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"get_InputAuthority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::PlayerRef>(this, ___internal_method);
}
inline ::Fusion::PlayerRef Fusion::NetworkObject::get_StateAuthority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"get_StateAuthority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::PlayerRef>(this, ___internal_method);
}
inline bool Fusion::NetworkObject::get_IsSpawnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"get_IsSpawnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::NetworkObject::set_IsSpawnable(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"set_IsSpawnable", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::NetworkObject::PrepareBehaviourOrder()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"PrepareBehaviourOrder", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkObject::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkObject*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkObject::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkObject*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkObject::OnDestroyNeverActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"OnDestroyNeverActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkObject::OnDestroyInternal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"OnDestroyInternal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkObject::ResetNetworkState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"ResetNetworkState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkObject::Defaults()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"Defaults", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Fusion::NetworkObject::GetWordCount(::Fusion::NetworkObject*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"GetWordCount", {}, {::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, obj);
}
inline int32_t Fusion::NetworkObject::GetLocalAuthorityMask()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"GetLocalAuthorityMask", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Fusion::NetworkObject::AssignInputAuthority(::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"AssignInputAuthority", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void Fusion::NetworkObject::RequestStateAuthority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"RequestStateAuthority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkObject::ReleaseStateAuthority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"ReleaseStateAuthority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkObject::RemoveInputAuthority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"RemoveInputAuthority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkId Fusion::NetworkObject::op_Implicit___Fusion__NetworkId(::Fusion::NetworkObject*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkId>(nullptr, ___internal_method, obj);
}
inline void Fusion::NetworkObject::SetPlayerAlwaysInterested(::Fusion::PlayerRef  player, bool  alwaysInterested)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"SetPlayerAlwaysInterested", {}, {::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, alwaysInterested);
}
inline void Fusion::NetworkObject::CopyStateFrom(::Fusion::NetworkObject*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"CopyStateFrom", {}, {::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
inline void Fusion::NetworkObject::CopyStateFrom(::Fusion::NetworkObjectHeaderPtr  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"CopyStateFrom", {}, {::i2c::type_of<::Fusion::NetworkObjectHeaderPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
inline ::Fusion::NetworkId Fusion::NetworkObject::NetworkWrap(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkObject*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"NetworkWrap", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkId>(nullptr, ___internal_method, runner, obj);
}
inline ::Fusion::NetworkId Fusion::NetworkObject::NetworkWrap(::Fusion::NetworkObject*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"NetworkWrap", {}, {::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkId>(nullptr, ___internal_method, obj);
}
inline void Fusion::NetworkObject::NetworkUnwrap(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkId  wrapper, ::by_ref<::Fusion::NetworkObject*>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"NetworkUnwrap", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<::by_ref<::Fusion::NetworkObject*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, runner, wrapper, result);
}
inline void Fusion::NetworkObject::MakeOwned(::Fusion::NetworkRunner*  runner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"MakeOwned", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner);
}
inline void Fusion::NetworkObject::MakeUnowned()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"MakeUnowned", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkObject::DebugAwake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"DebugAwake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkObject::DebugOnDestroy(bool  wasActive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {"DebugOnDestroy", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wasActive);
}
inline void Fusion::NetworkObject::GetDumpString(::System::Text::StringBuilder*  builder)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkObject*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, builder);
}
inline void Fusion::NetworkObject::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkObject* Fusion::NetworkObject::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkObject*>());
}
// Ctor Parameters []
constexpr ::Fusion::NetworkObject::NetworkObject()   {
}
//  Writing Method size for method: ::Fusion::NetworkObject_PriorityLevelDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObject_PriorityLevelDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Fusion::NetworkObject_PriorityLevelDelegate::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5faa3b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject_PriorityLevelDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObject_PriorityLevelDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::PriorityLevel (::Fusion::NetworkObject_PriorityLevelDelegate::*)(::Fusion::NetworkObject*, ::Fusion::PlayerRef)>(&::Fusion::NetworkObject_PriorityLevelDelegate::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5faa4c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkObject_PriorityLevelDelegate*>(),
                    {::i2c::class_of<::Fusion::NetworkObject_PriorityLevelDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObject_PriorityLevelDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Fusion::NetworkObject_PriorityLevelDelegate::*)(::Fusion::NetworkObject*, ::Fusion::PlayerRef, ::System::AsyncCallback*, ::System::Object*)>(&::Fusion::NetworkObject_PriorityLevelDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5faa4dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkObject_PriorityLevelDelegate*>(),
                    {::i2c::class_of<::Fusion::NetworkObject_PriorityLevelDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObject_PriorityLevelDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::PriorityLevel (::Fusion::NetworkObject_PriorityLevelDelegate::*)(::System::IAsyncResult*)>(&::Fusion::NetworkObject_PriorityLevelDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5faa570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkObject_PriorityLevelDelegate*>(),
                    {::i2c::class_of<::Fusion::NetworkObject_PriorityLevelDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Fusion::NetworkObject_PriorityLevelDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject_PriorityLevelDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::Fusion::PriorityLevel Fusion::NetworkObject_PriorityLevelDelegate::Invoke(::Fusion::NetworkObject*  networkObject, ::Fusion::PlayerRef  player)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkObject_PriorityLevelDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::Fusion::PriorityLevel>(this, ___internal_method, networkObject, player);
}
inline ::System::IAsyncResult* Fusion::NetworkObject_PriorityLevelDelegate::BeginInvoke(::Fusion::NetworkObject*  networkObject, ::Fusion::PlayerRef  player, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkObject_PriorityLevelDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, networkObject, player, callback, object);
}
inline ::Fusion::PriorityLevel Fusion::NetworkObject_PriorityLevelDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkObject_PriorityLevelDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::Fusion::PriorityLevel>(this, ___internal_method, result);
}
inline ::Fusion::NetworkObject_PriorityLevelDelegate* Fusion::NetworkObject_PriorityLevelDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkObject_PriorityLevelDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Fusion::NetworkObject_PriorityLevelDelegate::NetworkObject_PriorityLevelDelegate()   {
}
//  Writing Method size for method: ::Fusion::NetworkObject_ReplicateToDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObject_ReplicateToDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Fusion::NetworkObject_ReplicateToDelegate::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5faa1d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject_ReplicateToDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObject_ReplicateToDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkObject_ReplicateToDelegate::*)(::Fusion::NetworkObject*, ::Fusion::PlayerRef)>(&::Fusion::NetworkObject_ReplicateToDelegate::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5faa2e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkObject_ReplicateToDelegate*>(),
                    {::i2c::class_of<::Fusion::NetworkObject_ReplicateToDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObject_ReplicateToDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Fusion::NetworkObject_ReplicateToDelegate::*)(::Fusion::NetworkObject*, ::Fusion::PlayerRef, ::System::AsyncCallback*, ::System::Object*)>(&::Fusion::NetworkObject_ReplicateToDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5faa2fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkObject_ReplicateToDelegate*>(),
                    {::i2c::class_of<::Fusion::NetworkObject_ReplicateToDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObject_ReplicateToDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkObject_ReplicateToDelegate::*)(::System::IAsyncResult*)>(&::Fusion::NetworkObject_ReplicateToDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5faa390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkObject_ReplicateToDelegate*>(),
                    {::i2c::class_of<::Fusion::NetworkObject_ReplicateToDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Fusion::NetworkObject_ReplicateToDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObject_ReplicateToDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool Fusion::NetworkObject_ReplicateToDelegate::Invoke(::Fusion::NetworkObject*  networkObject, ::Fusion::PlayerRef  player)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkObject_ReplicateToDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, networkObject, player);
}
inline ::System::IAsyncResult* Fusion::NetworkObject_ReplicateToDelegate::BeginInvoke(::Fusion::NetworkObject*  networkObject, ::Fusion::PlayerRef  player, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkObject_ReplicateToDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, networkObject, player, callback, object);
}
inline bool Fusion::NetworkObject_ReplicateToDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkObject_ReplicateToDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
inline ::Fusion::NetworkObject_ReplicateToDelegate* Fusion::NetworkObject_ReplicateToDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkObject_ReplicateToDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Fusion::NetworkObject_ReplicateToDelegate::NetworkObject_ReplicateToDelegate()   {
}
