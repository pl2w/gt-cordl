#pragma once
// IWYU pragma private; include "GlobalNamespace/SITechTreeSO.hpp"
#include "GlobalNamespace/zzzz__SITechTreePage_impl.hpp"
#include "GlobalNamespace/zzzz__SIUpgradeType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeHashMap_2_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__SITechTreeSO_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GlobalNamespace/zzzz__GraphNode_1_def.hpp"
#include "GlobalNamespace/zzzz__SITechTreeNode_def.hpp"
#include "GlobalNamespace/zzzz__SITechTreePageId_def.hpp"
#include "GlobalNamespace/zzzz__SITechTreePage_def.hpp"
#include "GlobalNamespace/zzzz__SITechTreeSO_def.hpp"
#include "GlobalNamespace/zzzz__SIUpgradeType_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SITechTreeSO.get_TreePages
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::SITechTreePage*>* (::GlobalNamespace::SITechTreeSO::*)()>(&::GlobalNamespace::SITechTreeSO::get_TreePages)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aed4e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeSO*>(),
                        {"get_TreePages", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeSO.set_TreePages
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITechTreeSO::*)(::System::Collections::Generic::List_1<::GlobalNamespace::SITechTreePage*>*)>(&::GlobalNamespace::SITechTreeSO::set_TreePages)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aed4ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeSO*>(),
                        {"set_TreePages", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::SITechTreePage*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeSO.get_TreePageCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SITechTreeSO::*)()>(&::GlobalNamespace::SITechTreeSO::get_TreePageCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aed4f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeSO*>(),
                        {"get_TreePageCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeSO.set_TreePageCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITechTreeSO::*)(int32_t)>(&::GlobalNamespace::SITechTreeSO::set_TreePageCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aed4fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeSO*>(),
                        {"set_TreePageCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeSO.get_TreeNodeCounts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::GlobalNamespace::SITechTreeSO::*)()>(&::GlobalNamespace::SITechTreeSO::get_TreeNodeCounts)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aed504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeSO*>(),
                        {"get_TreeNodeCounts", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeSO.set_TreeNodeCounts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITechTreeSO::*)(::ArrayW<int32_t>)>(&::GlobalNamespace::SITechTreeSO::set_TreeNodeCounts)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aed50c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeSO*>(),
                        {"set_TreeNodeCounts", {}, {::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeSO.get_AllNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>* (::GlobalNamespace::SITechTreeSO::*)()>(&::GlobalNamespace::SITechTreeSO::get_AllNodes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aed514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeSO*>(),
                        {"get_AllNodes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeSO.set_AllNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITechTreeSO::*)(::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>*)>(&::GlobalNamespace::SITechTreeSO::set_AllNodes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aed51c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeSO*>(),
                        {"set_AllNodes", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeSO.get_Initialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SITechTreeSO::*)()>(&::GlobalNamespace::SITechTreeSO::get_Initialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aed524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeSO*>(),
                        {"get_Initialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeSO.set_Initialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITechTreeSO::*)(bool)>(&::GlobalNamespace::SITechTreeSO::set_Initialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aed52c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeSO*>(),
                        {"set_Initialized", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeSO.get_SpawnableEntities
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>* (::GlobalNamespace::SITechTreeSO::*)()>(&::GlobalNamespace::SITechTreeSO::get_SpawnableEntities)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5aed534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeSO*>(),
                        {"get_SpawnableEntities", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeSO.TryGetNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SITechTreeSO::*)(::GlobalNamespace::SIUpgradeType, ::by_ref<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>)>(&::GlobalNamespace::SITechTreeSO::TryGetNode)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5aed568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeSO*>(),
                        {"TryGetNode", {}, {::i2c::type_of<::GlobalNamespace::SIUpgradeType>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeSO.TryGetUpgradeTypeByEntityTypeId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SITechTreeSO::*)(int32_t, ::by_ref<::GlobalNamespace::SIUpgradeType>)>(&::GlobalNamespace::SITechTreeSO::TryGetUpgradeTypeByEntityTypeId)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5aed5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeSO*>(),
                        {"TryGetUpgradeTypeByEntityTypeId", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::SIUpgradeType>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeSO.IsSpawnableEntityTypeId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SITechTreeSO::*)(int32_t)>(&::GlobalNamespace::SITechTreeSO::IsSpawnableEntityTypeId)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5aed630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeSO*>(),
                        {"IsSpawnableEntityTypeId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeSO.IsValidPage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SITechTreeSO::*)(::GlobalNamespace::SITechTreePageId)>(&::GlobalNamespace::SITechTreeSO::IsValidPage)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5aed698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeSO*>(),
                        {"IsValidPage", {}, {::i2c::type_of<::GlobalNamespace::SITechTreePageId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeSO.GetTreePage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SITechTreePage* (::GlobalNamespace::SITechTreeSO::*)(::GlobalNamespace::SITechTreePageId)>(&::GlobalNamespace::SITechTreeSO::GetTreePage)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5aed838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeSO*>(),
                        {"GetTreePage", {}, {::i2c::type_of<::GlobalNamespace::SITechTreePageId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeSO.TryGetTreePage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SITechTreeSO::*)(::GlobalNamespace::SITechTreePageId, ::by_ref<::GlobalNamespace::SITechTreePage*>)>(&::GlobalNamespace::SITechTreeSO::TryGetTreePage)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5aed858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeSO*>(),
                        {"TryGetTreePage", {}, {::i2c::type_of<::GlobalNamespace::SITechTreePageId>(), ::i2c::type_of<::by_ref<::GlobalNamespace::SITechTreePage*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeSO.IsValidNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SITechTreeSO::*)(int32_t, int32_t)>(&::GlobalNamespace::SITechTreeSO::IsValidNode)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5aed9ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeSO*>(),
                        {"IsValidNode", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeSO.IsValidNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SITechTreeSO::*)(::GlobalNamespace::SIUpgradeType)>(&::GlobalNamespace::SITechTreeSO::IsValidNode)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5aeda14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeSO*>(),
                        {"IsValidNode", {}, {::i2c::type_of<::GlobalNamespace::SIUpgradeType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeSO.GetTreeNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SITechTreeNode* (::GlobalNamespace::SITechTreeSO::*)(int32_t, int32_t)>(&::GlobalNamespace::SITechTreeSO::GetTreeNode)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5aeda6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeSO*>(),
                        {"GetTreeNode", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeSO.GetTreeNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SITechTreeNode* (::GlobalNamespace::SITechTreeSO::*)(::GlobalNamespace::SIUpgradeType)>(&::GlobalNamespace::SITechTreeSO::GetTreeNode)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5aeda94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeSO*>(),
                        {"GetTreeNode", {}, {::i2c::type_of<::GlobalNamespace::SIUpgradeType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeSO.EnsureInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITechTreeSO::*)()>(&::GlobalNamespace::SITechTreeSO::EnsureInitialized)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5aed558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeSO*>(),
                        {"EnsureInitialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeSO.InitTechTree
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITechTreeSO::*)()>(&::GlobalNamespace::SITechTreeSO::InitTechTree)> {
  constexpr static std::size_t size = 0xd84;
  constexpr static std::size_t addrs = 0x5aedb24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeSO*>(),
                        {"InitTechTree", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeSO.AddSpawnableGadget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITechTreeSO::*)(::GlobalNamespace::GameEntity*)>(&::GlobalNamespace::SITechTreeSO::AddSpawnableGadget)> {
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0x5aeee14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeSO*>(),
                        {"AddSpawnableGadget", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeSO.ClearTechTree
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITechTreeSO::*)()>(&::GlobalNamespace::SITechTreeSO::ClearTechTree)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5aee8a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeSO*>(),
                        {"ClearTechTree", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeSO._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITechTreeSO::*)()>(&::GlobalNamespace::SITechTreeSO::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5aef30c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeSO*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::SITechTreePage*>& GlobalNamespace::SITechTreeSO::__cordl_internal_get_treePages()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___treePages;
}
constexpr ::ArrayW<::GlobalNamespace::SITechTreePage*> const& GlobalNamespace::SITechTreeSO::__cordl_internal_get_treePages() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___treePages;
}
constexpr void GlobalNamespace::SITechTreeSO::__cordl_internal_set_treePages(::ArrayW<::GlobalNamespace::SITechTreePage*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___treePages = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIUpgradeType,::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>*& GlobalNamespace::SITechTreeSO::__cordl_internal_get__nodeLookup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nodeLookup;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIUpgradeType,::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>* const& GlobalNamespace::SITechTreeSO::__cordl_internal_get__nodeLookup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nodeLookup;
}
constexpr void GlobalNamespace::SITechTreeSO::__cordl_internal_set__nodeLookup(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIUpgradeType,::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nodeLookup = value;
}
constexpr ::Unity::Collections::NativeHashMap_2<int32_t,::GlobalNamespace::SIUpgradeType>& GlobalNamespace::SITechTreeSO::__cordl_internal_get__upgradeTypeByEntityTypeId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____upgradeTypeByEntityTypeId;
}
constexpr ::Unity::Collections::NativeHashMap_2<int32_t,::GlobalNamespace::SIUpgradeType> const& GlobalNamespace::SITechTreeSO::__cordl_internal_get__upgradeTypeByEntityTypeId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____upgradeTypeByEntityTypeId;
}
constexpr void GlobalNamespace::SITechTreeSO::__cordl_internal_set__upgradeTypeByEntityTypeId(::Unity::Collections::NativeHashMap_2<int32_t,::GlobalNamespace::SIUpgradeType>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____upgradeTypeByEntityTypeId = value;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& GlobalNamespace::SITechTreeSO::__cordl_internal_get__spawnableEntityTypeIds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spawnableEntityTypeIds;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& GlobalNamespace::SITechTreeSO::__cordl_internal_get__spawnableEntityTypeIds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spawnableEntityTypeIds;
}
constexpr void GlobalNamespace::SITechTreeSO::__cordl_internal_set__spawnableEntityTypeIds(::System::Collections::Generic::HashSet_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____spawnableEntityTypeIds = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SITechTreePage*>*& GlobalNamespace::SITechTreeSO::__cordl_internal_get__TreePages_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TreePages_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SITechTreePage*>* const& GlobalNamespace::SITechTreeSO::__cordl_internal_get__TreePages_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TreePages_k__BackingField;
}
constexpr void GlobalNamespace::SITechTreeSO::__cordl_internal_set__TreePages_k__BackingField(::System::Collections::Generic::List_1<::GlobalNamespace::SITechTreePage*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TreePages_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::SITechTreeSO::__cordl_internal_get__TreePageCount_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TreePageCount_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::SITechTreeSO::__cordl_internal_get__TreePageCount_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TreePageCount_k__BackingField;
}
constexpr void GlobalNamespace::SITechTreeSO::__cordl_internal_set__TreePageCount_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TreePageCount_k__BackingField = value;
}
constexpr ::ArrayW<int32_t>& GlobalNamespace::SITechTreeSO::__cordl_internal_get__TreeNodeCounts_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TreeNodeCounts_k__BackingField;
}
constexpr ::ArrayW<int32_t> const& GlobalNamespace::SITechTreeSO::__cordl_internal_get__TreeNodeCounts_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TreeNodeCounts_k__BackingField;
}
constexpr void GlobalNamespace::SITechTreeSO::__cordl_internal_set__TreeNodeCounts_k__BackingField(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TreeNodeCounts_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>*& GlobalNamespace::SITechTreeSO::__cordl_internal_get__AllNodes_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AllNodes_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>* const& GlobalNamespace::SITechTreeSO::__cordl_internal_get__AllNodes_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AllNodes_k__BackingField;
}
constexpr void GlobalNamespace::SITechTreeSO::__cordl_internal_set__AllNodes_k__BackingField(::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AllNodes_k__BackingField = value;
}
constexpr bool& GlobalNamespace::SITechTreeSO::__cordl_internal_get__Initialized_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Initialized_k__BackingField;
}
constexpr bool const& GlobalNamespace::SITechTreeSO::__cordl_internal_get__Initialized_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Initialized_k__BackingField;
}
constexpr void GlobalNamespace::SITechTreeSO::__cordl_internal_set__Initialized_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Initialized_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*& GlobalNamespace::SITechTreeSO::__cordl_internal_get__spawnableEntities()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spawnableEntities;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>* const& GlobalNamespace::SITechTreeSO::__cordl_internal_get__spawnableEntities() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spawnableEntities;
}
constexpr void GlobalNamespace::SITechTreeSO::__cordl_internal_set__spawnableEntities(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____spawnableEntities = value;
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::SITechTreePage*>* GlobalNamespace::SITechTreeSO::get_TreePages()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeSO*>(),
                        {"get_TreePages", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::SITechTreePage*>*>(this, ___internal_method);
}
inline void GlobalNamespace::SITechTreeSO::set_TreePages(::System::Collections::Generic::List_1<::GlobalNamespace::SITechTreePage*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeSO*>(),
                        {"set_TreePages", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::SITechTreePage*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::SITechTreeSO::get_TreePageCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeSO*>(),
                        {"get_TreePageCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::SITechTreeSO::set_TreePageCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeSO*>(),
                        {"set_TreePageCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<int32_t> GlobalNamespace::SITechTreeSO::get_TreeNodeCounts()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeSO*>(),
                        {"get_TreeNodeCounts", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method);
}
inline void GlobalNamespace::SITechTreeSO::set_TreeNodeCounts(::ArrayW<int32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeSO*>(),
                        {"set_TreeNodeCounts", {}, {::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>* GlobalNamespace::SITechTreeSO::get_AllNodes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeSO*>(),
                        {"get_AllNodes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>*>(this, ___internal_method);
}
inline void GlobalNamespace::SITechTreeSO::set_AllNodes(::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeSO*>(),
                        {"set_AllNodes", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::SITechTreeSO::get_Initialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeSO*>(),
                        {"get_Initialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::SITechTreeSO::set_Initialized(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeSO*>(),
                        {"set_Initialized", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>* GlobalNamespace::SITechTreeSO::get_SpawnableEntities()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeSO*>(),
                        {"get_SpawnableEntities", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*>(this, ___internal_method);
}
inline bool GlobalNamespace::SITechTreeSO::TryGetNode(::GlobalNamespace::SIUpgradeType  upgradeType, ::by_ref<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeSO*>(),
                        {"TryGetNode", {}, {::i2c::type_of<::GlobalNamespace::SIUpgradeType>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, upgradeType, node);
}
inline bool GlobalNamespace::SITechTreeSO::TryGetUpgradeTypeByEntityTypeId(int32_t  entityTypeId, ::by_ref<::GlobalNamespace::SIUpgradeType>  upgradeType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeSO*>(),
                        {"TryGetUpgradeTypeByEntityTypeId", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::SIUpgradeType>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, entityTypeId, upgradeType);
}
inline bool GlobalNamespace::SITechTreeSO::IsSpawnableEntityTypeId(int32_t  entityTypeId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeSO*>(),
                        {"IsSpawnableEntityTypeId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, entityTypeId);
}
inline bool GlobalNamespace::SITechTreeSO::IsValidPage(::GlobalNamespace::SITechTreePageId  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeSO*>(),
                        {"IsValidPage", {}, {::i2c::type_of<::GlobalNamespace::SITechTreePageId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id);
}
inline ::GlobalNamespace::SITechTreePage* GlobalNamespace::SITechTreeSO::GetTreePage(::GlobalNamespace::SITechTreePageId  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeSO*>(),
                        {"GetTreePage", {}, {::i2c::type_of<::GlobalNamespace::SITechTreePageId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SITechTreePage*>(this, ___internal_method, id);
}
inline bool GlobalNamespace::SITechTreeSO::TryGetTreePage(::GlobalNamespace::SITechTreePageId  id, ::by_ref<::GlobalNamespace::SITechTreePage*>  treePage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeSO*>(),
                        {"TryGetTreePage", {}, {::i2c::type_of<::GlobalNamespace::SITechTreePageId>(), ::i2c::type_of<::by_ref<::GlobalNamespace::SITechTreePage*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id, treePage);
}
inline bool GlobalNamespace::SITechTreeSO::IsValidNode(int32_t  pageId, int32_t  nodeId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeSO*>(),
                        {"IsValidNode", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pageId, nodeId);
}
inline bool GlobalNamespace::SITechTreeSO::IsValidNode(::GlobalNamespace::SIUpgradeType  upgradeType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeSO*>(),
                        {"IsValidNode", {}, {::i2c::type_of<::GlobalNamespace::SIUpgradeType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, upgradeType);
}
inline ::GlobalNamespace::SITechTreeNode* GlobalNamespace::SITechTreeSO::GetTreeNode(int32_t  pageId, int32_t  nodeId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeSO*>(),
                        {"GetTreeNode", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SITechTreeNode*>(this, ___internal_method, pageId, nodeId);
}
inline ::GlobalNamespace::SITechTreeNode* GlobalNamespace::SITechTreeSO::GetTreeNode(::GlobalNamespace::SIUpgradeType  upgradeType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeSO*>(),
                        {"GetTreeNode", {}, {::i2c::type_of<::GlobalNamespace::SIUpgradeType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SITechTreeNode*>(this, ___internal_method, upgradeType);
}
inline void GlobalNamespace::SITechTreeSO::EnsureInitialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeSO*>(),
                        {"EnsureInitialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SITechTreeSO::InitTechTree()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeSO*>(),
                        {"InitTechTree", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SITechTreeSO::AddSpawnableGadget(::GlobalNamespace::GameEntity*  entity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeSO*>(),
                        {"AddSpawnableGadget", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entity);
}
inline void GlobalNamespace::SITechTreeSO::ClearTechTree()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeSO*>(),
                        {"ClearTechTree", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SITechTreeSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeSO*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SITechTreeSO* GlobalNamespace::SITechTreeSO::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SITechTreeSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SITechTreeSO::SITechTreeSO()   {
}
//  Writing Method size for method: ::GlobalNamespace::SITechTreeSO___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITechTreeSO___c::*)()>(&::GlobalNamespace::SITechTreeSO___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aef450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeSO___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeSO___c._InitTechTree_b__41_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SITechTreeSO___c::*)(::GlobalNamespace::SIUpgradeType)>(&::GlobalNamespace::SITechTreeSO___c::_InitTechTree_b__41_0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5aef458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeSO___c*>(),
                        {"<InitTechTree>b__41_0", {}, {::i2c::type_of<::GlobalNamespace::SIUpgradeType>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SITechTreeSO___c::setStaticF___9(::GlobalNamespace::SITechTreeSO___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::SITechTreeSO___c*, "<>9", ::GlobalNamespace::SITechTreeSO___c*>(std::forward<::GlobalNamespace::SITechTreeSO___c*>(value));
}
inline ::GlobalNamespace::SITechTreeSO___c* GlobalNamespace::SITechTreeSO___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::SITechTreeSO___c*, "<>9", ::GlobalNamespace::SITechTreeSO___c*>();
}
inline void GlobalNamespace::SITechTreeSO___c::setStaticF___9__41_0(::System::Func_2<::GlobalNamespace::SIUpgradeType,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::SIUpgradeType,int32_t>*, "<>9__41_0", ::GlobalNamespace::SITechTreeSO___c*>(std::forward<::System::Func_2<::GlobalNamespace::SIUpgradeType,int32_t>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::SIUpgradeType,int32_t>* GlobalNamespace::SITechTreeSO___c::getStaticF___9__41_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::SIUpgradeType,int32_t>*, "<>9__41_0", ::GlobalNamespace::SITechTreeSO___c*>();
}
inline void GlobalNamespace::SITechTreeSO___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeSO___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::SITechTreeSO___c::_InitTechTree_b__41_0(::GlobalNamespace::SIUpgradeType  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeSO___c*>(),
                        {"<InitTechTree>b__41_0", {}, {::i2c::type_of<::GlobalNamespace::SIUpgradeType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, v);
}
inline ::GlobalNamespace::SITechTreeSO___c* GlobalNamespace::SITechTreeSO___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SITechTreeSO___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SITechTreeSO___c::SITechTreeSO___c()   {
}
