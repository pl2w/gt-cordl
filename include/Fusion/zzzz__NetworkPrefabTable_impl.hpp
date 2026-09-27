#pragma once
// IWYU pragma private; include "Fusion/NetworkPrefabTable.hpp"
#include "Fusion/zzzz__BitSet64_impl.hpp"
#include "Fusion/zzzz__NetworkPrefabId_impl.hpp"
#include "Fusion/zzzz__NetworkPrefabTableOptions_impl.hpp"
#include "Fusion/zzzz__NetworkPrefabTable_PrefabAcquireData_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__ValueTuple_2_impl.hpp"
#include "Fusion/zzzz__NetworkPrefabTable_def.hpp"
#include "Fusion/zzzz__INetworkPrefabSource_def.hpp"
#include "Fusion/zzzz__NetworkObjectGuid_def.hpp"
#include "Fusion/zzzz__NetworkObject_def.hpp"
#include "Fusion/zzzz__NetworkPrefabId_def.hpp"
#include "Fusion/zzzz__NetworkPrefabTable_PrefabAcquireData_def.hpp"
#include "Fusion/zzzz__NetworkPrefabTable_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkPrefabTable.get_Prefabs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::Fusion::INetworkPrefabSource*>* (::Fusion::NetworkPrefabTable::*)()>(&::Fusion::NetworkPrefabTable::get_Prefabs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fce688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabTable*>(),
                        {"get_Prefabs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabTable.get_Version
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkPrefabTable::*)()>(&::Fusion::NetworkPrefabTable::get_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fce690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabTable*>(),
                        {"get_Version", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabTable.GetEntries
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Fusion::NetworkPrefabId,::Fusion::INetworkPrefabSource*>>* (::Fusion::NetworkPrefabTable::*)()>(&::Fusion::NetworkPrefabTable::GetEntries)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5fce698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabTable*>(),
                        {"GetEntries", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabTable.AddSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkPrefabId (::Fusion::NetworkPrefabTable::*)(::Fusion::INetworkPrefabSource*)>(&::Fusion::NetworkPrefabTable::AddSource)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5fce74c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabTable*>(),
                        {"AddSource", {}, {::i2c::type_of<::Fusion::INetworkPrefabSource*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabTable.TryAddSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkPrefabTable::*)(::Fusion::INetworkPrefabSource*, ::by_ref<::Fusion::NetworkPrefabId>)>(&::Fusion::NetworkPrefabTable::TryAddSource)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0x5fce880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabTable*>(),
                        {"TryAddSource", {}, {::i2c::type_of<::Fusion::INetworkPrefabSource*>(), ::i2c::type_of<::by_ref<::Fusion::NetworkPrefabId>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabTable.GetSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::INetworkPrefabSource* (::Fusion::NetworkPrefabTable::*)(::Fusion::NetworkObjectGuid)>(&::Fusion::NetworkPrefabTable::GetSource)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5fced58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabTable*>(),
                        {"GetSource", {}, {::i2c::type_of<::Fusion::NetworkObjectGuid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabTable.GetSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::INetworkPrefabSource* (::Fusion::NetworkPrefabTable::*)(::Fusion::NetworkPrefabId)>(&::Fusion::NetworkPrefabTable::GetSource)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5fcee00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabTable*>(),
                        {"GetSource", {}, {::i2c::type_of<::Fusion::NetworkPrefabId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabTable.GetId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkPrefabId (::Fusion::NetworkPrefabTable::*)(::Fusion::NetworkObjectGuid)>(&::Fusion::NetworkPrefabTable::GetId)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5fcef08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabTable*>(),
                        {"GetId", {}, {::i2c::type_of<::Fusion::NetworkObjectGuid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabTable.GetGuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkObjectGuid (::Fusion::NetworkPrefabTable::*)(::Fusion::NetworkPrefabId)>(&::Fusion::NetworkPrefabTable::GetGuid)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5fcef90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabTable*>(),
                        {"GetGuid", {}, {::i2c::type_of<::Fusion::NetworkPrefabId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabTable.GetInstancesCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkPrefabTable::*)(::Fusion::NetworkPrefabId)>(&::Fusion::NetworkPrefabTable::GetInstancesCount)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5fcf08c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabTable*>(),
                        {"GetInstancesCount", {}, {::i2c::type_of<::Fusion::NetworkPrefabId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabTable.AddInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkPrefabTable::*)(::Fusion::NetworkPrefabId)>(&::Fusion::NetworkPrefabTable::AddInstance)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x5fcf134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabTable*>(),
                        {"AddInstance", {}, {::i2c::type_of<::Fusion::NetworkPrefabId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabTable.RemoveInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkPrefabTable::*)(::Fusion::NetworkPrefabId)>(&::Fusion::NetworkPrefabTable::RemoveInstance)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x5fcf2f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabTable*>(),
                        {"RemoveInstance", {}, {::i2c::type_of<::Fusion::NetworkPrefabId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabTable.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkPrefabTable::*)(::Fusion::NetworkPrefabId)>(&::Fusion::NetworkPrefabTable::Contains)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fcf6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabTable*>(),
                        {"Contains", {}, {::i2c::type_of<::Fusion::NetworkPrefabId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabTable.IsAcquired
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkPrefabTable::*)(::Fusion::NetworkPrefabId)>(&::Fusion::NetworkPrefabTable::IsAcquired)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5fcf700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabTable*>(),
                        {"IsAcquired", {}, {::i2c::type_of<::Fusion::NetworkPrefabId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabTable.IsAcquired
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkPrefabTable::*)(int32_t)>(&::Fusion::NetworkPrefabTable::IsAcquired)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5fcf774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabTable*>(),
                        {"IsAcquired", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabTable.SetAcquired
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkPrefabTable::*)(int32_t, bool)>(&::Fusion::NetworkPrefabTable::SetAcquired)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5fcf7bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabTable*>(),
                        {"SetAcquired", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabTable.Load
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Fusion::NetworkObject> (::Fusion::NetworkPrefabTable::*)(::Fusion::NetworkPrefabId, bool)>(&::Fusion::NetworkPrefabTable::Load)> {
  constexpr static std::size_t size = 0x508;
  constexpr static std::size_t addrs = 0x5fcf84c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabTable*>(),
                        {"Load", {}, {::i2c::type_of<::Fusion::NetworkPrefabId>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabTable.Unload
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkPrefabTable::*)(::Fusion::NetworkPrefabId)>(&::Fusion::NetworkPrefabTable::Unload)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5fcfec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabTable*>(),
                        {"Unload", {}, {::i2c::type_of<::Fusion::NetworkPrefabId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabTable.UnloadUnreferenced
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkPrefabTable::*)(bool)>(&::Fusion::NetworkPrefabTable::UnloadUnreferenced)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x5fcff48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabTable*>(),
                        {"UnloadUnreferenced", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabTable.UnloadAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkPrefabTable::*)()>(&::Fusion::NetworkPrefabTable::UnloadAll)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5fd0230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabTable*>(),
                        {"UnloadAll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabTable.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkPrefabTable::*)()>(&::Fusion::NetworkPrefabTable::Clear)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5fd02a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabTable*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabTable.UnloadInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkPrefabTable::*)(int32_t)>(&::Fusion::NetworkPrefabTable::UnloadInternal)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5fcf548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabTable*>(),
                        {"UnloadInternal", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabTable.DecodePrefabId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkPrefabTable::*)(::Fusion::NetworkPrefabId)>(&::Fusion::NetworkPrefabTable::DecodePrefabId)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5fcfd54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabTable*>(),
                        {"DecodePrefabId", {}, {::i2c::type_of<::Fusion::NetworkPrefabId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabTable.TryDecodePrefabId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkPrefabTable::*)(::Fusion::NetworkPrefabId, ::by_ref<int32_t>)>(&::Fusion::NetworkPrefabTable::TryDecodePrefabId)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5fcee8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabTable*>(),
                        {"TryDecodePrefabId", {}, {::i2c::type_of<::Fusion::NetworkPrefabId>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabTable.GetBitSetCapacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkPrefabTable::*)(int32_t)>(&::Fusion::NetworkPrefabTable::GetBitSetCapacity)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5fcecf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabTable*>(),
                        {"GetBitSetCapacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabTable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkPrefabTable::*)()>(&::Fusion::NetworkPrefabTable::_ctor)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x5fd03e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabTable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::NetworkPrefabTableOptions& Fusion::NetworkPrefabTable::__cordl_internal_get_Options()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Options;
}
constexpr ::Fusion::NetworkPrefabTableOptions const& Fusion::NetworkPrefabTable::__cordl_internal_get_Options() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Options;
}
constexpr void Fusion::NetworkPrefabTable::__cordl_internal_set_Options(::Fusion::NetworkPrefabTableOptions  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Options = value;
}
constexpr ::System::Collections::Generic::List_1<::Fusion::INetworkPrefabSource*>*& Fusion::NetworkPrefabTable::__cordl_internal_get__sources()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sources;
}
constexpr ::System::Collections::Generic::List_1<::Fusion::INetworkPrefabSource*>* const& Fusion::NetworkPrefabTable::__cordl_internal_get__sources() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sources;
}
constexpr void Fusion::NetworkPrefabTable::__cordl_internal_set__sources(::System::Collections::Generic::List_1<::Fusion::INetworkPrefabSource*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sources = value;
}
constexpr ::ArrayW<::Fusion::BitSet64>& Fusion::NetworkPrefabTable::__cordl_internal_get__acquireMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____acquireMask;
}
constexpr ::ArrayW<::Fusion::BitSet64> const& Fusion::NetworkPrefabTable::__cordl_internal_get__acquireMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____acquireMask;
}
constexpr void Fusion::NetworkPrefabTable::__cordl_internal_set__acquireMask(::ArrayW<::Fusion::BitSet64>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____acquireMask = value;
}
constexpr ::ArrayW<::GlobalNamespace::NetworkPrefabTable_PrefabAcquireData>& Fusion::NetworkPrefabTable::__cordl_internal_get__acquireData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____acquireData;
}
constexpr ::ArrayW<::GlobalNamespace::NetworkPrefabTable_PrefabAcquireData> const& Fusion::NetworkPrefabTable::__cordl_internal_get__acquireData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____acquireData;
}
constexpr void Fusion::NetworkPrefabTable::__cordl_internal_set__acquireData(::ArrayW<::GlobalNamespace::NetworkPrefabTable_PrefabAcquireData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____acquireData = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkObjectGuid,int32_t>*& Fusion::NetworkPrefabTable::__cordl_internal_get__guidToIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____guidToIndex;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkObjectGuid,int32_t>* const& Fusion::NetworkPrefabTable::__cordl_internal_get__guidToIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____guidToIndex;
}
constexpr void Fusion::NetworkPrefabTable::__cordl_internal_set__guidToIndex(::System::Collections::Generic::Dictionary_2<::Fusion::NetworkObjectGuid,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____guidToIndex = value;
}
constexpr int32_t& Fusion::NetworkPrefabTable::__cordl_internal_get__version()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____version;
}
constexpr int32_t const& Fusion::NetworkPrefabTable::__cordl_internal_get__version() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____version;
}
constexpr void Fusion::NetworkPrefabTable::__cordl_internal_set__version(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____version = value;
}
inline ::System::Collections::Generic::IReadOnlyList_1<::Fusion::INetworkPrefabSource*>* Fusion::NetworkPrefabTable::get_Prefabs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabTable*>(),
                        {"get_Prefabs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::Fusion::INetworkPrefabSource*>*>(this, ___internal_method);
}
inline int32_t Fusion::NetworkPrefabTable::get_Version()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabTable*>(),
                        {"get_Version", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Fusion::NetworkPrefabId,::Fusion::INetworkPrefabSource*>>* Fusion::NetworkPrefabTable::GetEntries()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabTable*>(),
                        {"GetEntries", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Fusion::NetworkPrefabId,::Fusion::INetworkPrefabSource*>>*>(this, ___internal_method);
}
inline ::Fusion::NetworkPrefabId Fusion::NetworkPrefabTable::AddSource(::Fusion::INetworkPrefabSource*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabTable*>(),
                        {"AddSource", {}, {::i2c::type_of<::Fusion::INetworkPrefabSource*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkPrefabId>(this, ___internal_method, source);
}
inline bool Fusion::NetworkPrefabTable::TryAddSource(::Fusion::INetworkPrefabSource*  source, ::by_ref<::Fusion::NetworkPrefabId>  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabTable*>(),
                        {"TryAddSource", {}, {::i2c::type_of<::Fusion::INetworkPrefabSource*>(), ::i2c::type_of<::by_ref<::Fusion::NetworkPrefabId>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, source, id);
}
inline ::Fusion::INetworkPrefabSource* Fusion::NetworkPrefabTable::GetSource(::Fusion::NetworkObjectGuid  guid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabTable*>(),
                        {"GetSource", {}, {::i2c::type_of<::Fusion::NetworkObjectGuid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::INetworkPrefabSource*>(this, ___internal_method, guid);
}
inline ::Fusion::INetworkPrefabSource* Fusion::NetworkPrefabTable::GetSource(::Fusion::NetworkPrefabId  prefabId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabTable*>(),
                        {"GetSource", {}, {::i2c::type_of<::Fusion::NetworkPrefabId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::INetworkPrefabSource*>(this, ___internal_method, prefabId);
}
inline ::Fusion::NetworkPrefabId Fusion::NetworkPrefabTable::GetId(::Fusion::NetworkObjectGuid  guid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabTable*>(),
                        {"GetId", {}, {::i2c::type_of<::Fusion::NetworkObjectGuid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkPrefabId>(this, ___internal_method, guid);
}
inline ::Fusion::NetworkObjectGuid Fusion::NetworkPrefabTable::GetGuid(::Fusion::NetworkPrefabId  prefabId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabTable*>(),
                        {"GetGuid", {}, {::i2c::type_of<::Fusion::NetworkPrefabId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkObjectGuid>(this, ___internal_method, prefabId);
}
inline int32_t Fusion::NetworkPrefabTable::GetInstancesCount(::Fusion::NetworkPrefabId  prefabId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabTable*>(),
                        {"GetInstancesCount", {}, {::i2c::type_of<::Fusion::NetworkPrefabId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, prefabId);
}
inline int32_t Fusion::NetworkPrefabTable::AddInstance(::Fusion::NetworkPrefabId  prefabId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabTable*>(),
                        {"AddInstance", {}, {::i2c::type_of<::Fusion::NetworkPrefabId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, prefabId);
}
inline int32_t Fusion::NetworkPrefabTable::RemoveInstance(::Fusion::NetworkPrefabId  prefabId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabTable*>(),
                        {"RemoveInstance", {}, {::i2c::type_of<::Fusion::NetworkPrefabId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, prefabId);
}
inline bool Fusion::NetworkPrefabTable::Contains(::Fusion::NetworkPrefabId  prefabId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabTable*>(),
                        {"Contains", {}, {::i2c::type_of<::Fusion::NetworkPrefabId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, prefabId);
}
inline bool Fusion::NetworkPrefabTable::IsAcquired(::Fusion::NetworkPrefabId  prefabId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabTable*>(),
                        {"IsAcquired", {}, {::i2c::type_of<::Fusion::NetworkPrefabId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, prefabId);
}
inline bool Fusion::NetworkPrefabTable::IsAcquired(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabTable*>(),
                        {"IsAcquired", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index);
}
inline void Fusion::NetworkPrefabTable::SetAcquired(int32_t  index, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabTable*>(),
                        {"SetAcquired", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline ::UnityW<::Fusion::NetworkObject> Fusion::NetworkPrefabTable::Load(::Fusion::NetworkPrefabId  prefabId, bool  isSynchronous)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabTable*>(),
                        {"Load", {}, {::i2c::type_of<::Fusion::NetworkPrefabId>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Fusion::NetworkObject>>(this, ___internal_method, prefabId, isSynchronous);
}
inline bool Fusion::NetworkPrefabTable::Unload(::Fusion::NetworkPrefabId  prefabId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabTable*>(),
                        {"Unload", {}, {::i2c::type_of<::Fusion::NetworkPrefabId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, prefabId);
}
inline int32_t Fusion::NetworkPrefabTable::UnloadUnreferenced(bool  includeIncompleteLoads)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabTable*>(),
                        {"UnloadUnreferenced", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, includeIncompleteLoads);
}
inline void Fusion::NetworkPrefabTable::UnloadAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabTable*>(),
                        {"UnloadAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkPrefabTable::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabTable*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkPrefabTable::UnloadInternal(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabTable*>(),
                        {"UnloadInternal", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline int32_t Fusion::NetworkPrefabTable::DecodePrefabId(::Fusion::NetworkPrefabId  prefabId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabTable*>(),
                        {"DecodePrefabId", {}, {::i2c::type_of<::Fusion::NetworkPrefabId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, prefabId);
}
inline bool Fusion::NetworkPrefabTable::TryDecodePrefabId(::Fusion::NetworkPrefabId  prefabId, ::by_ref<int32_t>  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabTable*>(),
                        {"TryDecodePrefabId", {}, {::i2c::type_of<::Fusion::NetworkPrefabId>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, prefabId, index);
}
inline int32_t Fusion::NetworkPrefabTable::GetBitSetCapacity(int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabTable*>(),
                        {"GetBitSetCapacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, length);
}
inline void Fusion::NetworkPrefabTable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabTable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkPrefabTable* Fusion::NetworkPrefabTable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkPrefabTable*>());
}
// Ctor Parameters []
constexpr ::Fusion::NetworkPrefabTable::NetworkPrefabTable()   {
}
//  Writing Method size for method: ::Fusion::NetworkPrefabTable__GetEntries_d__12._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkPrefabTable__GetEntries_d__12::*)(int32_t)>(&::Fusion::NetworkPrefabTable__GetEntries_d__12::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5fce718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabTable__GetEntries_d__12*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabTable__GetEntries_d__12.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkPrefabTable__GetEntries_d__12::*)()>(&::Fusion::NetworkPrefabTable__GetEntries_d__12::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fd05d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabTable__GetEntries_d__12*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabTable__GetEntries_d__12.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkPrefabTable__GetEntries_d__12::*)()>(&::Fusion::NetworkPrefabTable__GetEntries_d__12::MoveNext)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5fd05e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabTable__GetEntries_d__12*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabTable__GetEntries_d__12.System_Collections_Generic_IEnumerator_System_ValueTuple_Fusion_NetworkPrefabId_Fusion_INetworkPrefabSource___get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::Fusion::NetworkPrefabId,::Fusion::INetworkPrefabSource*> (::Fusion::NetworkPrefabTable__GetEntries_d__12::*)()>(&::Fusion::NetworkPrefabTable__GetEntries_d__12::System_Collections_Generic_IEnumerator_System_ValueTuple_Fusion_NetworkPrefabId_Fusion_INetworkPrefabSource___get_Current)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fd0704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabTable__GetEntries_d__12*>(),
                        {"System.Collections.Generic.IEnumerator<System.ValueTuple<Fusion.NetworkPrefabId,Fusion.INetworkPrefabSource>>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabTable__GetEntries_d__12.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkPrefabTable__GetEntries_d__12::*)()>(&::Fusion::NetworkPrefabTable__GetEntries_d__12::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5fd0710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabTable__GetEntries_d__12*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabTable__GetEntries_d__12.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Fusion::NetworkPrefabTable__GetEntries_d__12::*)()>(&::Fusion::NetworkPrefabTable__GetEntries_d__12::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5fd0748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabTable__GetEntries_d__12*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabTable__GetEntries_d__12.System_Collections_Generic_IEnumerable_System_ValueTuple_Fusion_NetworkPrefabId_Fusion_INetworkPrefabSource___GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Fusion::NetworkPrefabId,::Fusion::INetworkPrefabSource*>>* (::Fusion::NetworkPrefabTable__GetEntries_d__12::*)()>(&::Fusion::NetworkPrefabTable__GetEntries_d__12::System_Collections_Generic_IEnumerable_System_ValueTuple_Fusion_NetworkPrefabId_Fusion_INetworkPrefabSource___GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5fd07a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabTable__GetEntries_d__12*>(),
                        {"System.Collections.Generic.IEnumerable<System.ValueTuple<Fusion.NetworkPrefabId,Fusion.INetworkPrefabSource>>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabTable__GetEntries_d__12.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Fusion::NetworkPrefabTable__GetEntries_d__12::*)()>(&::Fusion::NetworkPrefabTable__GetEntries_d__12::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fd0848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabTable__GetEntries_d__12*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::NetworkPrefabTable__GetEntries_d__12::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Fusion::NetworkPrefabTable__GetEntries_d__12::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Fusion::NetworkPrefabTable__GetEntries_d__12::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::ValueTuple_2<::Fusion::NetworkPrefabId,::Fusion::INetworkPrefabSource*>& Fusion::NetworkPrefabTable__GetEntries_d__12::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::ValueTuple_2<::Fusion::NetworkPrefabId,::Fusion::INetworkPrefabSource*> const& Fusion::NetworkPrefabTable__GetEntries_d__12::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Fusion::NetworkPrefabTable__GetEntries_d__12::__cordl_internal_set___2__current(::System::ValueTuple_2<::Fusion::NetworkPrefabId,::Fusion::INetworkPrefabSource*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr int32_t& Fusion::NetworkPrefabTable__GetEntries_d__12::__cordl_internal_get___l__initialThreadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr int32_t const& Fusion::NetworkPrefabTable__GetEntries_d__12::__cordl_internal_get___l__initialThreadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr void Fusion::NetworkPrefabTable__GetEntries_d__12::__cordl_internal_set___l__initialThreadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____l__initialThreadId = value;
}
constexpr ::Fusion::NetworkPrefabTable*& Fusion::NetworkPrefabTable__GetEntries_d__12::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Fusion::NetworkPrefabTable* const& Fusion::NetworkPrefabTable__GetEntries_d__12::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Fusion::NetworkPrefabTable__GetEntries_d__12::__cordl_internal_set___4__this(::Fusion::NetworkPrefabTable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr int32_t& Fusion::NetworkPrefabTable__GetEntries_d__12::__cordl_internal_get__i_5__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__1;
}
constexpr int32_t const& Fusion::NetworkPrefabTable__GetEntries_d__12::__cordl_internal_get__i_5__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__1;
}
constexpr void Fusion::NetworkPrefabTable__GetEntries_d__12::__cordl_internal_set__i_5__1(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____i_5__1 = value;
}
inline void Fusion::NetworkPrefabTable__GetEntries_d__12::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabTable__GetEntries_d__12*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Fusion::NetworkPrefabTable__GetEntries_d__12::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabTable__GetEntries_d__12*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Fusion::NetworkPrefabTable__GetEntries_d__12::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabTable__GetEntries_d__12*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::ValueTuple_2<::Fusion::NetworkPrefabId,::Fusion::INetworkPrefabSource*> Fusion::NetworkPrefabTable__GetEntries_d__12::System_Collections_Generic_IEnumerator_System_ValueTuple_Fusion_NetworkPrefabId_Fusion_INetworkPrefabSource___get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabTable__GetEntries_d__12*>(),
                        {"System.Collections.Generic.IEnumerator<System.ValueTuple<Fusion.NetworkPrefabId,Fusion.INetworkPrefabSource>>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::Fusion::NetworkPrefabId,::Fusion::INetworkPrefabSource*>>(this, ___internal_method);
}
inline void Fusion::NetworkPrefabTable__GetEntries_d__12::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabTable__GetEntries_d__12*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Fusion::NetworkPrefabTable__GetEntries_d__12::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabTable__GetEntries_d__12*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Fusion::NetworkPrefabId,::Fusion::INetworkPrefabSource*>>* Fusion::NetworkPrefabTable__GetEntries_d__12::System_Collections_Generic_IEnumerable_System_ValueTuple_Fusion_NetworkPrefabId_Fusion_INetworkPrefabSource___GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabTable__GetEntries_d__12*>(),
                        {"System.Collections.Generic.IEnumerable<System.ValueTuple<Fusion.NetworkPrefabId,Fusion.INetworkPrefabSource>>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Fusion::NetworkPrefabId,::Fusion::INetworkPrefabSource*>>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Fusion::NetworkPrefabTable__GetEntries_d__12::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabTable__GetEntries_d__12*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Fusion::NetworkPrefabTable__GetEntries_d__12* Fusion::NetworkPrefabTable__GetEntries_d__12::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkPrefabTable__GetEntries_d__12*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Fusion::NetworkPrefabId,::Fusion::INetworkPrefabSource*>>"
constexpr  Fusion::NetworkPrefabTable__GetEntries_d__12::operator ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Fusion::NetworkPrefabId,::Fusion::INetworkPrefabSource*>>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Fusion::NetworkPrefabId,::Fusion::INetworkPrefabSource*>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Fusion::NetworkPrefabId,::Fusion::INetworkPrefabSource*>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Fusion::NetworkPrefabId,::Fusion::INetworkPrefabSource*>>* Fusion::NetworkPrefabTable__GetEntries_d__12::i___System__Collections__Generic__IEnumerable_1___System__ValueTuple_2___Fusion__NetworkPrefabId___Fusion__INetworkPrefabSource___() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Fusion::NetworkPrefabId,::Fusion::INetworkPrefabSource*>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Fusion::NetworkPrefabTable__GetEntries_d__12::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Fusion::NetworkPrefabTable__GetEntries_d__12::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Fusion::NetworkPrefabId,::Fusion::INetworkPrefabSource*>>"
constexpr  Fusion::NetworkPrefabTable__GetEntries_d__12::operator ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Fusion::NetworkPrefabId,::Fusion::INetworkPrefabSource*>>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Fusion::NetworkPrefabId,::Fusion::INetworkPrefabSource*>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Fusion::NetworkPrefabId,::Fusion::INetworkPrefabSource*>>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Fusion::NetworkPrefabId,::Fusion::INetworkPrefabSource*>>* Fusion::NetworkPrefabTable__GetEntries_d__12::i___System__Collections__Generic__IEnumerator_1___System__ValueTuple_2___Fusion__NetworkPrefabId___Fusion__INetworkPrefabSource___() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Fusion::NetworkPrefabId,::Fusion::INetworkPrefabSource*>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Fusion::NetworkPrefabTable__GetEntries_d__12::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Fusion::NetworkPrefabTable__GetEntries_d__12::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Fusion::NetworkPrefabTable__GetEntries_d__12::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Fusion::NetworkPrefabTable__GetEntries_d__12::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::NetworkPrefabTable__GetEntries_d__12::NetworkPrefabTable__GetEntries_d__12()   {
}
