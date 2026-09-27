#pragma once
// IWYU pragma private; include "Fusion/SimulationBehaviourUpdater.hpp"
#include "Fusion/zzzz__SimulationModes_impl.hpp"
#include "Fusion/zzzz__SimulationStages_impl.hpp"
#include "Fusion/zzzz__Topologies_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__SimulationBehaviourUpdater_def.hpp"
#include "Fusion/Statistics/zzzz__BehaviourStatisticsManager_def.hpp"
#include "Fusion/Statistics/zzzz__BehaviourStatisticsSnapshot_def.hpp"
#include "Fusion/zzzz__ILogDumpable_def.hpp"
#include "Fusion/zzzz__NetworkObject_def.hpp"
#include "Fusion/zzzz__NetworkProjectConfig_def.hpp"
#include "Fusion/zzzz__NetworkRunner_def.hpp"
#include "Fusion/zzzz__SimulationBehaviourListScope_def.hpp"
#include "Fusion/zzzz__SimulationBehaviourUpdater_def.hpp"
#include "Fusion/zzzz__SimulationBehaviour_def.hpp"
#include "Fusion/zzzz__SimulationModes_def.hpp"
#include "Fusion/zzzz__SimulationStages_def.hpp"
#include "Fusion/zzzz__Topologies_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
//  Writing Method size for method: ::Fusion::SimulationBehaviourUpdater.get_CallbackInterfacesDefualts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Type*> (*)()>(&::Fusion::SimulationBehaviourUpdater::get_CallbackInterfacesDefualts)> {
  constexpr static std::size_t size = 0x70c;
  constexpr static std::size_t addrs = 0x5f86f28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourUpdater*>(),
                        {"get_CallbackInterfacesDefualts", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationBehaviourUpdater._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationBehaviourUpdater::*)(::Fusion::NetworkProjectConfig*)>(&::Fusion::SimulationBehaviourUpdater::_ctor)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x5f87634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourUpdater*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::NetworkProjectConfig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationBehaviourUpdater.Scanlibrary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::Type*>* (*)()>(&::Fusion::SimulationBehaviourUpdater::Scanlibrary)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x5f87818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourUpdater*>(),
                        {"Scanlibrary", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationBehaviourUpdater.GetSimulationFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_3<::Fusion::SimulationModes,::Fusion::SimulationStages,::Fusion::Topologies> (*)(::System::Type*)>(&::Fusion::SimulationBehaviourUpdater::GetSimulationFlags)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x5f87bb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourUpdater*>(),
                        {"GetSimulationFlags", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationBehaviourUpdater.GetExecutionOrder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::SimulationBehaviourUpdater::*)(::System::Type*)>(&::Fusion::SimulationBehaviourUpdater::GetExecutionOrder)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5f87d9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourUpdater*>(),
                        {"GetExecutionOrder", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationBehaviourUpdater.BuildTypeOrder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationBehaviourUpdater::*)(::ArrayW<::System::Type*>)>(&::Fusion::SimulationBehaviourUpdater::BuildTypeOrder)> {
  constexpr static std::size_t size = 0x7bc;
  constexpr static std::size_t addrs = 0x5f87e8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourUpdater*>(),
                        {"BuildTypeOrder", {}, {::i2c::type_of<::ArrayW<::System::Type*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationBehaviourUpdater.InvokeRender
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationBehaviourUpdater::*)()>(&::Fusion::SimulationBehaviourUpdater::InvokeRender)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x5f888b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourUpdater*>(),
                        {"InvokeRender", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationBehaviourUpdater.GetCallbackCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::SimulationBehaviourUpdater::*)(::System::Type*)>(&::Fusion::SimulationBehaviourUpdater::GetCallbackCount)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5f88bbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourUpdater*>(),
                        {"GetCallbackCount", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationBehaviourUpdater.GetCallbackHead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::SimulationBehaviourListScope (::Fusion::SimulationBehaviourUpdater::*)(::System::Type*, int32_t, ::by_ref<::Fusion::SimulationBehaviour*>)>(&::Fusion::SimulationBehaviourUpdater::GetCallbackHead)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5f88c2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourUpdater*>(),
                        {"GetCallbackHead", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Fusion::SimulationBehaviour*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationBehaviourUpdater.GetAllSimulationBehaviours
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationBehaviourUpdater::*)(::System::Collections::Generic::List_1<::UnityW<::Fusion::SimulationBehaviour>>*)>(&::Fusion::SimulationBehaviourUpdater::GetAllSimulationBehaviours)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5f88cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourUpdater*>(),
                        {"GetAllSimulationBehaviours", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Fusion::SimulationBehaviour>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationBehaviourUpdater.InvokeFixedUpdateNetwork
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationBehaviourUpdater::*)(::Fusion::SimulationStages, ::Fusion::SimulationModes, ::Fusion::Topologies)>(&::Fusion::SimulationBehaviourUpdater::InvokeFixedUpdateNetwork)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x5f88e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourUpdater*>(),
                        {"InvokeFixedUpdateNetwork", {}, {::i2c::type_of<::Fusion::SimulationStages>(), ::i2c::type_of<::Fusion::SimulationModes>(), ::i2c::type_of<::Fusion::Topologies>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationBehaviourUpdater.AddObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationBehaviourUpdater::*)(::Fusion::NetworkRunner*, ::Fusion::NetworkObject*, bool, bool)>(&::Fusion::SimulationBehaviourUpdater::AddObject)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x5f891ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourUpdater*>(),
                        {"AddObject", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationBehaviourUpdater.AddBehaviour
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationBehaviourUpdater::*)(::Fusion::SimulationBehaviour*, bool)>(&::Fusion::SimulationBehaviourUpdater::AddBehaviour)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x5f89454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourUpdater*>(),
                        {"AddBehaviour", {}, {::i2c::type_of<::Fusion::SimulationBehaviour*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationBehaviourUpdater.CheckSimulationBehaviourForNetworkedAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationBehaviourUpdater::*)(::System::Type*)>(&::Fusion::SimulationBehaviourUpdater::CheckSimulationBehaviourForNetworkedAttribute)> {
  constexpr static std::size_t size = 0x4e4;
  constexpr static std::size_t addrs = 0x5f8984c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourUpdater*>(),
                        {"CheckSimulationBehaviourForNetworkedAttribute", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationBehaviourUpdater.RemoveBehaviour
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationBehaviourUpdater::*)(::Fusion::SimulationBehaviour*)>(&::Fusion::SimulationBehaviourUpdater::RemoveBehaviour)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x5f8a334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourUpdater*>(),
                        {"RemoveBehaviour", {}, {::i2c::type_of<::Fusion::SimulationBehaviour*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationBehaviourUpdater.GetTypeHeads
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::Fusion::SimulationBehaviour>> (::Fusion::SimulationBehaviourUpdater::*)(::System::Type*)>(&::Fusion::SimulationBehaviourUpdater::GetTypeHeads)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x5f8a868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourUpdater*>(),
                        {"GetTypeHeads", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationBehaviourUpdater.AddType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationBehaviourUpdater::*)(::System::Type*, ::System::ValueTuple_3<::Fusion::SimulationModes,::Fusion::SimulationStages,::Fusion::Topologies>)>(&::Fusion::SimulationBehaviourUpdater::AddType)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x5f88648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourUpdater*>(),
                        {"AddType", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::ValueTuple_3<::Fusion::SimulationModes,::Fusion::SimulationStages,::Fusion::Topologies>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationBehaviourUpdater.FindList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::SimulationBehaviourUpdater_BehaviourList* (::Fusion::SimulationBehaviourUpdater::*)(::System::Type*)>(&::Fusion::SimulationBehaviourUpdater::FindList)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x5f89d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourUpdater*>(),
                        {"FindList", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationBehaviourUpdater.FinishBehaviourStatisticsPendingSnapshot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationBehaviourUpdater::*)()>(&::Fusion::SimulationBehaviourUpdater::FinishBehaviourStatisticsPendingSnapshot)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5f8abf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourUpdater*>(),
                        {"FinishBehaviourStatisticsPendingSnapshot", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationBehaviourUpdater.TryGetBehaviourStatisticsSnapshot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::SimulationBehaviourUpdater::*)(::System::Type*, ::by_ref<::Fusion::Statistics::BehaviourStatisticsSnapshot*>)>(&::Fusion::SimulationBehaviourUpdater::TryGetBehaviourStatisticsSnapshot)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5f8ad30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourUpdater*>(),
                        {"TryGetBehaviourStatisticsSnapshot", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::Fusion::Statistics::BehaviourStatisticsSnapshot*>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::Fusion::SimulationBehaviourUpdater_BehaviourList*>*& Fusion::SimulationBehaviourUpdater::__cordl_internal_get__byTypeLookup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____byTypeLookup;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::Fusion::SimulationBehaviourUpdater_BehaviourList*>* const& Fusion::SimulationBehaviourUpdater::__cordl_internal_get__byTypeLookup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____byTypeLookup;
}
constexpr void Fusion::SimulationBehaviourUpdater::__cordl_internal_set__byTypeLookup(::System::Collections::Generic::Dictionary_2<::System::Type*,::Fusion::SimulationBehaviourUpdater_BehaviourList*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____byTypeLookup = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::ValueTuple_2<::ArrayW<::UnityW<::Fusion::SimulationBehaviour>>,::ArrayW<::System::Type*>>>*& Fusion::SimulationBehaviourUpdater::__cordl_internal_get__byTypeHierarchy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____byTypeHierarchy;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::ValueTuple_2<::ArrayW<::UnityW<::Fusion::SimulationBehaviour>>,::ArrayW<::System::Type*>>>* const& Fusion::SimulationBehaviourUpdater::__cordl_internal_get__byTypeHierarchy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____byTypeHierarchy;
}
constexpr void Fusion::SimulationBehaviourUpdater::__cordl_internal_set__byTypeHierarchy(::System::Collections::Generic::Dictionary_2<::System::Type*,::System::ValueTuple_2<::ArrayW<::UnityW<::Fusion::SimulationBehaviour>>,::ArrayW<::System::Type*>>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____byTypeHierarchy = value;
}
constexpr ::System::Collections::Generic::List_1<::Fusion::SimulationBehaviourUpdater_BehaviourList*>*& Fusion::SimulationBehaviourUpdater::__cordl_internal_get__inOrderList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inOrderList;
}
constexpr ::System::Collections::Generic::List_1<::Fusion::SimulationBehaviourUpdater_BehaviourList*>* const& Fusion::SimulationBehaviourUpdater::__cordl_internal_get__inOrderList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inOrderList;
}
constexpr void Fusion::SimulationBehaviourUpdater::__cordl_internal_set__inOrderList(::System::Collections::Generic::List_1<::Fusion::SimulationBehaviourUpdater_BehaviourList*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inOrderList = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::List_1<::Fusion::SimulationBehaviourUpdater_BehaviourList*>*>*& Fusion::SimulationBehaviourUpdater::__cordl_internal_get__inOrderByInterfaceList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inOrderByInterfaceList;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::List_1<::Fusion::SimulationBehaviourUpdater_BehaviourList*>*>* const& Fusion::SimulationBehaviourUpdater::__cordl_internal_get__inOrderByInterfaceList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inOrderByInterfaceList;
}
constexpr void Fusion::SimulationBehaviourUpdater::__cordl_internal_set__inOrderByInterfaceList(::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::List_1<::Fusion::SimulationBehaviourUpdater_BehaviourList*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inOrderByInterfaceList = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::System::Type*>*& Fusion::SimulationBehaviourUpdater::__cordl_internal_get__behavioursChecked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____behavioursChecked;
}
constexpr ::System::Collections::Generic::HashSet_1<::System::Type*>* const& Fusion::SimulationBehaviourUpdater::__cordl_internal_get__behavioursChecked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____behavioursChecked;
}
constexpr void Fusion::SimulationBehaviourUpdater::__cordl_internal_set__behavioursChecked(::System::Collections::Generic::HashSet_1<::System::Type*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____behavioursChecked = value;
}
constexpr ::Fusion::NetworkProjectConfig*& Fusion::SimulationBehaviourUpdater::__cordl_internal_get__config()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____config;
}
constexpr ::Fusion::NetworkProjectConfig* const& Fusion::SimulationBehaviourUpdater::__cordl_internal_get__config() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____config;
}
constexpr void Fusion::SimulationBehaviourUpdater::__cordl_internal_set__config(::Fusion::NetworkProjectConfig*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____config = value;
}
inline ::ArrayW<::System::Type*> Fusion::SimulationBehaviourUpdater::get_CallbackInterfacesDefualts()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourUpdater*>(),
                        {"get_CallbackInterfacesDefualts", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*>>(nullptr, ___internal_method);
}
inline void Fusion::SimulationBehaviourUpdater::_ctor(::Fusion::NetworkProjectConfig*  config)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourUpdater*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::NetworkProjectConfig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, config);
}
inline ::System::Collections::Generic::List_1<::System::Type*>* Fusion::SimulationBehaviourUpdater::Scanlibrary()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourUpdater*>(),
                        {"Scanlibrary", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Type*>*>(nullptr, ___internal_method);
}
inline ::System::ValueTuple_3<::Fusion::SimulationModes,::Fusion::SimulationStages,::Fusion::Topologies> Fusion::SimulationBehaviourUpdater::GetSimulationFlags(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourUpdater*>(),
                        {"GetSimulationFlags", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_3<::Fusion::SimulationModes,::Fusion::SimulationStages,::Fusion::Topologies>>(nullptr, ___internal_method, type);
}
inline int32_t Fusion::SimulationBehaviourUpdater::GetExecutionOrder(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourUpdater*>(),
                        {"GetExecutionOrder", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, type);
}
inline void Fusion::SimulationBehaviourUpdater::BuildTypeOrder(::ArrayW<::System::Type*>  customCallbackInterfaces)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourUpdater*>(),
                        {"BuildTypeOrder", {}, {::i2c::type_of<::ArrayW<::System::Type*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, customCallbackInterfaces);
}
inline void Fusion::SimulationBehaviourUpdater::InvokeRender()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourUpdater*>(),
                        {"InvokeRender", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Fusion::SimulationBehaviourUpdater::GetCallbackCount(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourUpdater*>(),
                        {"GetCallbackCount", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, type);
}
inline ::Fusion::SimulationBehaviourListScope Fusion::SimulationBehaviourUpdater::GetCallbackHead(::System::Type*  type, int32_t  index, ::by_ref<::Fusion::SimulationBehaviour*>  head)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourUpdater*>(),
                        {"GetCallbackHead", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Fusion::SimulationBehaviour*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::SimulationBehaviourListScope>(this, ___internal_method, type, index, head);
}
inline void Fusion::SimulationBehaviourUpdater::GetAllSimulationBehaviours(::System::Collections::Generic::List_1<::UnityW<::Fusion::SimulationBehaviour>>*  allSb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourUpdater*>(),
                        {"GetAllSimulationBehaviours", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Fusion::SimulationBehaviour>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, allSb);
}
inline void Fusion::SimulationBehaviourUpdater::InvokeFixedUpdateNetwork(::Fusion::SimulationStages  stage, ::Fusion::SimulationModes  mode, ::Fusion::Topologies  topology)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourUpdater*>(),
                        {"InvokeFixedUpdateNetwork", {}, {::i2c::type_of<::Fusion::SimulationStages>(), ::i2c::type_of<::Fusion::SimulationModes>(), ::i2c::type_of<::Fusion::Topologies>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stage, mode, topology);
}
inline void Fusion::SimulationBehaviourUpdater::AddObject(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkObject*  obj, bool  skipFirstCall, bool  isInSimulation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourUpdater*>(),
                        {"AddObject", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, obj, skipFirstCall, isInSimulation);
}
inline void Fusion::SimulationBehaviourUpdater::AddBehaviour(::Fusion::SimulationBehaviour*  behaviour, bool  skipFirstCall)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourUpdater*>(),
                        {"AddBehaviour", {}, {::i2c::type_of<::Fusion::SimulationBehaviour*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, behaviour, skipFirstCall);
}
inline void Fusion::SimulationBehaviourUpdater::CheckSimulationBehaviourForNetworkedAttribute(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourUpdater*>(),
                        {"CheckSimulationBehaviourForNetworkedAttribute", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline void Fusion::SimulationBehaviourUpdater::RemoveBehaviour(::Fusion::SimulationBehaviour*  behaviour)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourUpdater*>(),
                        {"RemoveBehaviour", {}, {::i2c::type_of<::Fusion::SimulationBehaviour*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, behaviour);
}
inline ::ArrayW<::UnityW<::Fusion::SimulationBehaviour>> Fusion::SimulationBehaviourUpdater::GetTypeHeads(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourUpdater*>(),
                        {"GetTypeHeads", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::Fusion::SimulationBehaviour>>>(this, ___internal_method, type);
}
inline void Fusion::SimulationBehaviourUpdater::AddType(::System::Type*  type, ::System::ValueTuple_3<::Fusion::SimulationModes,::Fusion::SimulationStages,::Fusion::Topologies>  attr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourUpdater*>(),
                        {"AddType", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::ValueTuple_3<::Fusion::SimulationModes,::Fusion::SimulationStages,::Fusion::Topologies>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, attr);
}
inline ::Fusion::SimulationBehaviourUpdater_BehaviourList* Fusion::SimulationBehaviourUpdater::FindList(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourUpdater*>(),
                        {"FindList", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::SimulationBehaviourUpdater_BehaviourList*>(this, ___internal_method, type);
}
inline void Fusion::SimulationBehaviourUpdater::FinishBehaviourStatisticsPendingSnapshot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourUpdater*>(),
                        {"FinishBehaviourStatisticsPendingSnapshot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Fusion::SimulationBehaviourUpdater::TryGetBehaviourStatisticsSnapshot(::System::Type*  behaviourType, ::by_ref<::Fusion::Statistics::BehaviourStatisticsSnapshot*>  behaviourStatisticsSnapshot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourUpdater*>(),
                        {"TryGetBehaviourStatisticsSnapshot", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::Fusion::Statistics::BehaviourStatisticsSnapshot*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, behaviourType, behaviourStatisticsSnapshot);
}
inline ::Fusion::SimulationBehaviourUpdater* Fusion::SimulationBehaviourUpdater::New_ctor(::Fusion::NetworkProjectConfig*  config)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::SimulationBehaviourUpdater*>(config));
}
// Ctor Parameters []
constexpr ::Fusion::SimulationBehaviourUpdater::SimulationBehaviourUpdater()   {
}
//  Writing Method size for method: ::Fusion::SimulationBehaviourUpdater___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationBehaviourUpdater___c::*)()>(&::Fusion::SimulationBehaviourUpdater___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f8afb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourUpdater___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationBehaviourUpdater___c._BuildTypeOrder_b__12_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::SimulationBehaviourUpdater___c::*)(::System::Type*)>(&::Fusion::SimulationBehaviourUpdater___c::_BuildTypeOrder_b__12_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f8afb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourUpdater___c*>(),
                        {"<BuildTypeOrder>b__12_0", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationBehaviourUpdater___c._BuildTypeOrder_b__12_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::SimulationBehaviourUpdater___c::*)(::Fusion::SimulationBehaviourUpdater_BehaviourList*, ::Fusion::SimulationBehaviourUpdater_BehaviourList*)>(&::Fusion::SimulationBehaviourUpdater___c::_BuildTypeOrder_b__12_1)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f8afd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourUpdater___c*>(),
                        {"<BuildTypeOrder>b__12_1", {}, {::i2c::type_of<::Fusion::SimulationBehaviourUpdater_BehaviourList*>(), ::i2c::type_of<::Fusion::SimulationBehaviourUpdater_BehaviourList*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationBehaviourUpdater___c._FindList_b__24_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::SimulationBehaviourUpdater___c::*)(::System::Collections::Generic::KeyValuePair_2<::System::Type*,::Fusion::SimulationBehaviourUpdater_BehaviourList*>)>(&::Fusion::SimulationBehaviourUpdater___c::_FindList_b__24_0)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5f8aff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourUpdater___c*>(),
                        {"<FindList>b__24_0", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::System::Type*,::Fusion::SimulationBehaviourUpdater_BehaviourList*>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::SimulationBehaviourUpdater___c::setStaticF___9(::Fusion::SimulationBehaviourUpdater___c*  value)  {
::cordl_internals::setStaticField<::Fusion::SimulationBehaviourUpdater___c*, "<>9", ::Fusion::SimulationBehaviourUpdater___c*>(std::forward<::Fusion::SimulationBehaviourUpdater___c*>(value));
}
inline ::Fusion::SimulationBehaviourUpdater___c* Fusion::SimulationBehaviourUpdater___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Fusion::SimulationBehaviourUpdater___c*, "<>9", ::Fusion::SimulationBehaviourUpdater___c*>();
}
inline void Fusion::SimulationBehaviourUpdater___c::setStaticF___9__12_0(::System::Func_2<::System::Type*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Type*,bool>*, "<>9__12_0", ::Fusion::SimulationBehaviourUpdater___c*>(std::forward<::System::Func_2<::System::Type*,bool>*>(value));
}
inline ::System::Func_2<::System::Type*,bool>* Fusion::SimulationBehaviourUpdater___c::getStaticF___9__12_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Type*,bool>*, "<>9__12_0", ::Fusion::SimulationBehaviourUpdater___c*>();
}
inline void Fusion::SimulationBehaviourUpdater___c::setStaticF___9__12_1(::System::Comparison_1<::Fusion::SimulationBehaviourUpdater_BehaviourList*>*  value)  {
::cordl_internals::setStaticField<::System::Comparison_1<::Fusion::SimulationBehaviourUpdater_BehaviourList*>*, "<>9__12_1", ::Fusion::SimulationBehaviourUpdater___c*>(std::forward<::System::Comparison_1<::Fusion::SimulationBehaviourUpdater_BehaviourList*>*>(value));
}
inline ::System::Comparison_1<::Fusion::SimulationBehaviourUpdater_BehaviourList*>* Fusion::SimulationBehaviourUpdater___c::getStaticF___9__12_1()  {
return ::cordl_internals::getStaticField<::System::Comparison_1<::Fusion::SimulationBehaviourUpdater_BehaviourList*>*, "<>9__12_1", ::Fusion::SimulationBehaviourUpdater___c*>();
}
inline void Fusion::SimulationBehaviourUpdater___c::setStaticF___9__24_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Type*,::Fusion::SimulationBehaviourUpdater_BehaviourList*>,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Type*,::Fusion::SimulationBehaviourUpdater_BehaviourList*>,::StringW>*, "<>9__24_0", ::Fusion::SimulationBehaviourUpdater___c*>(std::forward<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Type*,::Fusion::SimulationBehaviourUpdater_BehaviourList*>,::StringW>*>(value));
}
inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Type*,::Fusion::SimulationBehaviourUpdater_BehaviourList*>,::StringW>* Fusion::SimulationBehaviourUpdater___c::getStaticF___9__24_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Type*,::Fusion::SimulationBehaviourUpdater_BehaviourList*>,::StringW>*, "<>9__24_0", ::Fusion::SimulationBehaviourUpdater___c*>();
}
inline void Fusion::SimulationBehaviourUpdater___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourUpdater___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Fusion::SimulationBehaviourUpdater___c::_BuildTypeOrder_b__12_0(::System::Type*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourUpdater___c*>(),
                        {"<BuildTypeOrder>b__12_0", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline int32_t Fusion::SimulationBehaviourUpdater___c::_BuildTypeOrder_b__12_1(::Fusion::SimulationBehaviourUpdater_BehaviourList*  a, ::Fusion::SimulationBehaviourUpdater_BehaviourList*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourUpdater___c*>(),
                        {"<BuildTypeOrder>b__12_1", {}, {::i2c::type_of<::Fusion::SimulationBehaviourUpdater_BehaviourList*>(), ::i2c::type_of<::Fusion::SimulationBehaviourUpdater_BehaviourList*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, a, b);
}
inline ::StringW Fusion::SimulationBehaviourUpdater___c::_FindList_b__24_0(::System::Collections::Generic::KeyValuePair_2<::System::Type*,::Fusion::SimulationBehaviourUpdater_BehaviourList*>  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourUpdater___c*>(),
                        {"<FindList>b__24_0", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::System::Type*,::Fusion::SimulationBehaviourUpdater_BehaviourList*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, x);
}
inline ::Fusion::SimulationBehaviourUpdater___c* Fusion::SimulationBehaviourUpdater___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::SimulationBehaviourUpdater___c*>());
}
// Ctor Parameters []
constexpr ::Fusion::SimulationBehaviourUpdater___c::SimulationBehaviourUpdater___c()   {
}
//  Writing Method size for method: ::Fusion::SimulationBehaviourUpdater_BehaviourList.AddAfter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationBehaviourUpdater_BehaviourList::*)(::Fusion::SimulationBehaviour*, ::Fusion::SimulationBehaviour*)>(&::Fusion::SimulationBehaviourUpdater_BehaviourList::AddAfter)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5f8a044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourUpdater_BehaviourList*>(),
                        {"AddAfter", {}, {::i2c::type_of<::Fusion::SimulationBehaviour*>(), ::i2c::type_of<::Fusion::SimulationBehaviour*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationBehaviourUpdater_BehaviourList.AddFirst
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationBehaviourUpdater_BehaviourList::*)(::Fusion::SimulationBehaviour*)>(&::Fusion::SimulationBehaviourUpdater_BehaviourList::AddFirst)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5f8a28c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourUpdater_BehaviourList*>(),
                        {"AddFirst", {}, {::i2c::type_of<::Fusion::SimulationBehaviour*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationBehaviourUpdater_BehaviourList.AddLast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationBehaviourUpdater_BehaviourList::*)(::Fusion::SimulationBehaviour*)>(&::Fusion::SimulationBehaviourUpdater_BehaviourList::AddLast)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5f8a1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourUpdater_BehaviourList*>(),
                        {"AddLast", {}, {::i2c::type_of<::Fusion::SimulationBehaviour*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationBehaviourUpdater_BehaviourList.RemoveAllPending
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationBehaviourUpdater_BehaviourList::*)()>(&::Fusion::SimulationBehaviourUpdater_BehaviourList::RemoveAllPending)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5f86d9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourUpdater_BehaviourList*>(),
                        {"RemoveAllPending", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationBehaviourUpdater_BehaviourList.PendingRemove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationBehaviourUpdater_BehaviourList::*)(::Fusion::SimulationBehaviour*)>(&::Fusion::SimulationBehaviourUpdater_BehaviourList::PendingRemove)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5f8a580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourUpdater_BehaviourList*>(),
                        {"PendingRemove", {}, {::i2c::type_of<::Fusion::SimulationBehaviour*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationBehaviourUpdater_BehaviourList.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationBehaviourUpdater_BehaviourList::*)(::Fusion::SimulationBehaviour*)>(&::Fusion::SimulationBehaviourUpdater_BehaviourList::Remove)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5f8a6c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourUpdater_BehaviourList*>(),
                        {"Remove", {}, {::i2c::type_of<::Fusion::SimulationBehaviour*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationBehaviourUpdater_BehaviourList.IsInList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::SimulationBehaviourUpdater_BehaviourList::*)(::Fusion::SimulationBehaviour*)>(&::Fusion::SimulationBehaviourUpdater_BehaviourList::IsInList)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f8a020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourUpdater_BehaviourList*>(),
                        {"IsInList", {}, {::i2c::type_of<::Fusion::SimulationBehaviour*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationBehaviourUpdater_BehaviourList.Fusion_ILogDumpable_Dump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationBehaviourUpdater_BehaviourList::*)(::System::Text::StringBuilder*)>(&::Fusion::SimulationBehaviourUpdater_BehaviourList::Fusion_ILogDumpable_Dump)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5f8add4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourUpdater_BehaviourList*>(),
                        {"Fusion.ILogDumpable.Dump", {}, {::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationBehaviourUpdater_BehaviourList._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationBehaviourUpdater_BehaviourList::*)()>(&::Fusion::SimulationBehaviourUpdater_BehaviourList::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5f8ab84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourUpdater_BehaviourList*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Fusion::SimulationBehaviourUpdater_BehaviourList::__cordl_internal_get_Type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Type;
}
constexpr ::System::Type* const& Fusion::SimulationBehaviourUpdater_BehaviourList::__cordl_internal_get_Type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Type;
}
constexpr void Fusion::SimulationBehaviourUpdater_BehaviourList::__cordl_internal_set_Type(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Type = value;
}
constexpr int32_t& Fusion::SimulationBehaviourUpdater_BehaviourList::__cordl_internal_get_ExecutionOrder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExecutionOrder;
}
constexpr int32_t const& Fusion::SimulationBehaviourUpdater_BehaviourList::__cordl_internal_get_ExecutionOrder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExecutionOrder;
}
constexpr void Fusion::SimulationBehaviourUpdater_BehaviourList::__cordl_internal_set_ExecutionOrder(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ExecutionOrder = value;
}
constexpr ::Fusion::SimulationModes& Fusion::SimulationBehaviourUpdater_BehaviourList::__cordl_internal_get_Modes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Modes;
}
constexpr ::Fusion::SimulationModes const& Fusion::SimulationBehaviourUpdater_BehaviourList::__cordl_internal_get_Modes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Modes;
}
constexpr void Fusion::SimulationBehaviourUpdater_BehaviourList::__cordl_internal_set_Modes(::Fusion::SimulationModes  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Modes = value;
}
constexpr ::Fusion::SimulationStages& Fusion::SimulationBehaviourUpdater_BehaviourList::__cordl_internal_get_Stages()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Stages;
}
constexpr ::Fusion::SimulationStages const& Fusion::SimulationBehaviourUpdater_BehaviourList::__cordl_internal_get_Stages() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Stages;
}
constexpr void Fusion::SimulationBehaviourUpdater_BehaviourList::__cordl_internal_set_Stages(::Fusion::SimulationStages  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Stages = value;
}
constexpr ::Fusion::Topologies& Fusion::SimulationBehaviourUpdater_BehaviourList::__cordl_internal_get_Topologies()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Topologies;
}
constexpr ::Fusion::Topologies const& Fusion::SimulationBehaviourUpdater_BehaviourList::__cordl_internal_get_Topologies() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Topologies;
}
constexpr void Fusion::SimulationBehaviourUpdater_BehaviourList::__cordl_internal_set_Topologies(::Fusion::Topologies  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Topologies = value;
}
constexpr ::UnityW<::Fusion::SimulationBehaviour>& Fusion::SimulationBehaviourUpdater_BehaviourList::__cordl_internal_get_Head()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Head;
}
constexpr ::UnityW<::Fusion::SimulationBehaviour> const& Fusion::SimulationBehaviourUpdater_BehaviourList::__cordl_internal_get_Head() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Head;
}
constexpr void Fusion::SimulationBehaviourUpdater_BehaviourList::__cordl_internal_set_Head(::UnityW<::Fusion::SimulationBehaviour>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Head = value;
}
constexpr ::UnityW<::Fusion::SimulationBehaviour>& Fusion::SimulationBehaviourUpdater_BehaviourList::__cordl_internal_get_Tail()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Tail;
}
constexpr ::UnityW<::Fusion::SimulationBehaviour> const& Fusion::SimulationBehaviourUpdater_BehaviourList::__cordl_internal_get_Tail() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Tail;
}
constexpr void Fusion::SimulationBehaviourUpdater_BehaviourList::__cordl_internal_set_Tail(::UnityW<::Fusion::SimulationBehaviour>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Tail = value;
}
constexpr int32_t& Fusion::SimulationBehaviourUpdater_BehaviourList::__cordl_internal_get_LockCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LockCount;
}
constexpr int32_t const& Fusion::SimulationBehaviourUpdater_BehaviourList::__cordl_internal_get_LockCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LockCount;
}
constexpr void Fusion::SimulationBehaviourUpdater_BehaviourList::__cordl_internal_set_LockCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LockCount = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Fusion::SimulationBehaviour>>*& Fusion::SimulationBehaviourUpdater_BehaviourList::__cordl_internal_get_PendingRemovals()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PendingRemovals;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Fusion::SimulationBehaviour>>* const& Fusion::SimulationBehaviourUpdater_BehaviourList::__cordl_internal_get_PendingRemovals() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PendingRemovals;
}
constexpr void Fusion::SimulationBehaviourUpdater_BehaviourList::__cordl_internal_set_PendingRemovals(::System::Collections::Generic::List_1<::UnityW<::Fusion::SimulationBehaviour>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PendingRemovals = value;
}
constexpr ::Fusion::Statistics::BehaviourStatisticsManager*& Fusion::SimulationBehaviourUpdater_BehaviourList::__cordl_internal_get_BehaviourStats()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BehaviourStats;
}
constexpr ::Fusion::Statistics::BehaviourStatisticsManager* const& Fusion::SimulationBehaviourUpdater_BehaviourList::__cordl_internal_get_BehaviourStats() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BehaviourStats;
}
constexpr void Fusion::SimulationBehaviourUpdater_BehaviourList::__cordl_internal_set_BehaviourStats(::Fusion::Statistics::BehaviourStatisticsManager*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BehaviourStats = value;
}
inline void Fusion::SimulationBehaviourUpdater_BehaviourList::AddAfter(::Fusion::SimulationBehaviour*  item, ::Fusion::SimulationBehaviour*  after)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourUpdater_BehaviourList*>(),
                        {"AddAfter", {}, {::i2c::type_of<::Fusion::SimulationBehaviour*>(), ::i2c::type_of<::Fusion::SimulationBehaviour*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item, after);
}
inline void Fusion::SimulationBehaviourUpdater_BehaviourList::AddFirst(::Fusion::SimulationBehaviour*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourUpdater_BehaviourList*>(),
                        {"AddFirst", {}, {::i2c::type_of<::Fusion::SimulationBehaviour*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline void Fusion::SimulationBehaviourUpdater_BehaviourList::AddLast(::Fusion::SimulationBehaviour*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourUpdater_BehaviourList*>(),
                        {"AddLast", {}, {::i2c::type_of<::Fusion::SimulationBehaviour*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline void Fusion::SimulationBehaviourUpdater_BehaviourList::RemoveAllPending()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourUpdater_BehaviourList*>(),
                        {"RemoveAllPending", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::SimulationBehaviourUpdater_BehaviourList::PendingRemove(::Fusion::SimulationBehaviour*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourUpdater_BehaviourList*>(),
                        {"PendingRemove", {}, {::i2c::type_of<::Fusion::SimulationBehaviour*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline void Fusion::SimulationBehaviourUpdater_BehaviourList::Remove(::Fusion::SimulationBehaviour*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourUpdater_BehaviourList*>(),
                        {"Remove", {}, {::i2c::type_of<::Fusion::SimulationBehaviour*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline bool Fusion::SimulationBehaviourUpdater_BehaviourList::IsInList(::Fusion::SimulationBehaviour*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourUpdater_BehaviourList*>(),
                        {"IsInList", {}, {::i2c::type_of<::Fusion::SimulationBehaviour*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
inline void Fusion::SimulationBehaviourUpdater_BehaviourList::Fusion_ILogDumpable_Dump(::System::Text::StringBuilder*  builder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourUpdater_BehaviourList*>(),
                        {"Fusion.ILogDumpable.Dump", {}, {::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, builder);
}
inline void Fusion::SimulationBehaviourUpdater_BehaviourList::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourUpdater_BehaviourList*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::SimulationBehaviourUpdater_BehaviourList* Fusion::SimulationBehaviourUpdater_BehaviourList::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::SimulationBehaviourUpdater_BehaviourList*>());
}
/// @brief Convert operator to "::Fusion::ILogDumpable"
constexpr  Fusion::SimulationBehaviourUpdater_BehaviourList::operator ::Fusion::ILogDumpable*() noexcept {
return static_cast<::Fusion::ILogDumpable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::ILogDumpable"
constexpr ::Fusion::ILogDumpable* Fusion::SimulationBehaviourUpdater_BehaviourList::i___Fusion__ILogDumpable() noexcept {
return static_cast<::Fusion::ILogDumpable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::SimulationBehaviourUpdater_BehaviourList::SimulationBehaviourUpdater_BehaviourList()   {
}
