#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectTypeId.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__NetworkObjectTypeId_def.hpp"
#include "Fusion/Sockets/zzzz__NetBitBuffer_def.hpp"
#include "Fusion/zzzz__INetworkStruct_def.hpp"
#include "Fusion/zzzz__NetworkObjectTypeId_def.hpp"
#include "Fusion/zzzz__NetworkPrefabId_def.hpp"
#include "Fusion/zzzz__NetworkSceneLoadId_def.hpp"
#include "Fusion/zzzz__NetworkSceneObjectId_def.hpp"
#include "Fusion/zzzz__NetworkTypeIdKind_def.hpp"
#include "Fusion/zzzz__SceneRef_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkObjectTypeId.get_Comparer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkObjectTypeId_EqualityComparer* (*)()>(&::Fusion::NetworkObjectTypeId::get_Comparer)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5fcc9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectTypeId>(),
                        {"get_Comparer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectTypeId.get_PlayerData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkObjectTypeId (*)()>(&::Fusion::NetworkObjectTypeId::get_PlayerData)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5fcca48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectTypeId>(),
                        {"get_PlayerData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectTypeId.get_Kind
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkTypeIdKind (::Fusion::NetworkObjectTypeId::*)()>(&::Fusion::NetworkObjectTypeId::get_Kind)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fccaac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectTypeId>(),
                        {"get_Kind", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectTypeId.FromSceneRefAndObjectIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkObjectTypeId (*)(::Fusion::SceneRef, int32_t, ::Fusion::NetworkSceneLoadId)>(&::Fusion::NetworkObjectTypeId::FromSceneRefAndObjectIndex)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5fccac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectTypeId>(),
                        {"FromSceneRefAndObjectIndex", {}, {::i2c::type_of<::Fusion::SceneRef>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::NetworkSceneLoadId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectTypeId.FromSceneObjectId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkObjectTypeId (*)(::Fusion::NetworkSceneObjectId)>(&::Fusion::NetworkObjectTypeId::FromSceneObjectId)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5fccb34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectTypeId>(),
                        {"FromSceneObjectId", {}, {::i2c::type_of<::Fusion::NetworkSceneObjectId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectTypeId.get_AsSceneObjectId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkSceneObjectId (::Fusion::NetworkObjectTypeId::*)()>(&::Fusion::NetworkObjectTypeId::get_AsSceneObjectId)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5fccc08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectTypeId>(),
                        {"get_AsSceneObjectId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectTypeId.FromPrefabId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkObjectTypeId (*)(::Fusion::NetworkPrefabId)>(&::Fusion::NetworkObjectTypeId::FromPrefabId)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5fccdc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectTypeId>(),
                        {"FromPrefabId", {}, {::i2c::type_of<::Fusion::NetworkPrefabId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectTypeId.get_AsPrefabId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkPrefabId (::Fusion::NetworkObjectTypeId::*)()>(&::Fusion::NetworkObjectTypeId::get_AsPrefabId)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5fcce48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectTypeId>(),
                        {"get_AsPrefabId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectTypeId.FromCustom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkObjectTypeId (*)(uint32_t)>(&::Fusion::NetworkObjectTypeId::FromCustom)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fccfd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectTypeId>(),
                        {"FromCustom", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectTypeId.get_AsCustom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Fusion::NetworkObjectTypeId::*)()>(&::Fusion::NetworkObjectTypeId::get_AsCustom)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5fccfdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectTypeId>(),
                        {"get_AsCustom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectTypeId.FromStruct
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkObjectTypeId (*)(uint16_t)>(&::Fusion::NetworkObjectTypeId::FromStruct)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5fcca9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectTypeId>(),
                        {"FromStruct", {}, {::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectTypeId.get_AsInternalStructId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::Fusion::NetworkObjectTypeId::*)()>(&::Fusion::NetworkObjectTypeId::get_AsInternalStructId)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5fcd168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectTypeId>(),
                        {"get_AsInternalStructId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectTypeId.get_IsNone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkObjectTypeId::*)()>(&::Fusion::NetworkObjectTypeId::get_IsNone)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5fcd2f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectTypeId>(),
                        {"get_IsNone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectTypeId.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkObjectTypeId::*)()>(&::Fusion::NetworkObjectTypeId::get_IsValid)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5fcd354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectTypeId>(),
                        {"get_IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectTypeId.get_IsSceneObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkObjectTypeId::*)()>(&::Fusion::NetworkObjectTypeId::get_IsSceneObject)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5fccd60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectTypeId>(),
                        {"get_IsSceneObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectTypeId.get_IsPrefab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkObjectTypeId::*)()>(&::Fusion::NetworkObjectTypeId::get_IsPrefab)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5fccf68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectTypeId>(),
                        {"get_IsPrefab", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectTypeId.get_IsStruct
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkObjectTypeId::*)()>(&::Fusion::NetworkObjectTypeId::get_IsStruct)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5fcd28c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectTypeId>(),
                        {"get_IsStruct", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectTypeId.get_IsCustom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkObjectTypeId::*)()>(&::Fusion::NetworkObjectTypeId::get_IsCustom)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5fcd100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectTypeId>(),
                        {"get_IsCustom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectTypeId.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkObjectTypeId::*)(::Fusion::NetworkObjectTypeId)>(&::Fusion::NetworkObjectTypeId::Equals)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5fcd3b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectTypeId>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::NetworkObjectTypeId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectTypeId.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkObjectTypeId::*)()>(&::Fusion::NetworkObjectTypeId::GetHashCode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5fcd3dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkObjectTypeId>(),
                    {::i2c::class_of<::Fusion::NetworkObjectTypeId>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectTypeId.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkObjectTypeId::*)(::System::Object*)>(&::Fusion::NetworkObjectTypeId::Equals)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5fcd3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkObjectTypeId>(),
                    {::i2c::class_of<::Fusion::NetworkObjectTypeId>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectTypeId.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::NetworkObjectTypeId::*)()>(&::Fusion::NetworkObjectTypeId::ToString)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x5fcd48c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkObjectTypeId>(),
                    {::i2c::class_of<::Fusion::NetworkObjectTypeId>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectTypeId.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::NetworkObjectTypeId, ::Fusion::NetworkObjectTypeId)>(&::Fusion::NetworkObjectTypeId::op_Equality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fcd6a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectTypeId>(),
                        {"op_Equality", {}, {::i2c::type_of<::Fusion::NetworkObjectTypeId>(), ::i2c::type_of<::Fusion::NetworkObjectTypeId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectTypeId.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::NetworkObjectTypeId, ::Fusion::NetworkObjectTypeId)>(&::Fusion::NetworkObjectTypeId::op_Inequality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fcd6b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectTypeId>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Fusion::NetworkObjectTypeId>(), ::i2c::type_of<::Fusion::NetworkObjectTypeId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectTypeId.op_Implicit___Fusion__NetworkObjectTypeId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkObjectTypeId (*)(::Fusion::NetworkPrefabId)>(&::Fusion::NetworkObjectTypeId::op_Implicit___Fusion__NetworkObjectTypeId)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5fcd6c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectTypeId>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Fusion::NetworkPrefabId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectTypeId.WriteInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::NetworkObjectTypeId, ::Fusion::Sockets::NetBitBuffer*, int32_t)>(&::Fusion::NetworkObjectTypeId::WriteInternal)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5fcd714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectTypeId>(),
                        {"WriteInternal", {}, {::i2c::type_of<::Fusion::NetworkObjectTypeId>(), ::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectTypeId.ReadInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkObjectTypeId (*)(::Fusion::Sockets::NetBitBuffer*, int32_t)>(&::Fusion::NetworkObjectTypeId::ReadInternal)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5fcd758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectTypeId>(),
                        {"ReadInternal", {}, {::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr uint32_t& Fusion::NetworkObjectTypeId::__cordl_internal_get__value0()  {
return this->____value0;
}
constexpr uint32_t const& Fusion::NetworkObjectTypeId::__cordl_internal_get__value0() const {
return this->____value0;
}
constexpr void Fusion::NetworkObjectTypeId::__cordl_internal_set__value0(uint32_t  value)  {
this->____value0 = value;
}
constexpr uint32_t& Fusion::NetworkObjectTypeId::__cordl_internal_get__value1()  {
return this->____value1;
}
constexpr uint32_t const& Fusion::NetworkObjectTypeId::__cordl_internal_get__value1() const {
return this->____value1;
}
constexpr void Fusion::NetworkObjectTypeId::__cordl_internal_set__value1(uint32_t  value)  {
this->____value1 = value;
}
inline void Fusion::NetworkObjectTypeId::setStaticF__Comparer_k__BackingField(::Fusion::NetworkObjectTypeId_EqualityComparer*  value)  {
::cordl_internals::setStaticField<::Fusion::NetworkObjectTypeId_EqualityComparer*, "<Comparer>k__BackingField", ::Fusion::NetworkObjectTypeId>(std::forward<::Fusion::NetworkObjectTypeId_EqualityComparer*>(value));
}
inline ::Fusion::NetworkObjectTypeId_EqualityComparer* Fusion::NetworkObjectTypeId::getStaticF__Comparer_k__BackingField()  {
return ::cordl_internals::getStaticField<::Fusion::NetworkObjectTypeId_EqualityComparer*, "<Comparer>k__BackingField", ::Fusion::NetworkObjectTypeId>();
}
inline ::Fusion::NetworkObjectTypeId_EqualityComparer* Fusion::NetworkObjectTypeId::get_Comparer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectTypeId>(),
                        {"get_Comparer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkObjectTypeId_EqualityComparer*>(nullptr, ___internal_method);
}
inline ::Fusion::NetworkObjectTypeId Fusion::NetworkObjectTypeId::get_PlayerData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectTypeId>(),
                        {"get_PlayerData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkObjectTypeId>(nullptr, ___internal_method);
}
inline ::Fusion::NetworkTypeIdKind Fusion::NetworkObjectTypeId::get_Kind()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectTypeId>(),
                        {"get_Kind", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkTypeIdKind>(*this, ___internal_method);
}
inline ::Fusion::NetworkObjectTypeId Fusion::NetworkObjectTypeId::FromSceneRefAndObjectIndex(::Fusion::SceneRef  sceneRef, int32_t  objIndex, ::Fusion::NetworkSceneLoadId  loadId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectTypeId>(),
                        {"FromSceneRefAndObjectIndex", {}, {::i2c::type_of<::Fusion::SceneRef>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::NetworkSceneLoadId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkObjectTypeId>(nullptr, ___internal_method, sceneRef, objIndex, loadId);
}
inline ::Fusion::NetworkObjectTypeId Fusion::NetworkObjectTypeId::FromSceneObjectId(::Fusion::NetworkSceneObjectId  sceneObjectId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectTypeId>(),
                        {"FromSceneObjectId", {}, {::i2c::type_of<::Fusion::NetworkSceneObjectId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkObjectTypeId>(nullptr, ___internal_method, sceneObjectId);
}
inline ::Fusion::NetworkSceneObjectId Fusion::NetworkObjectTypeId::get_AsSceneObjectId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectTypeId>(),
                        {"get_AsSceneObjectId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkSceneObjectId>(*this, ___internal_method);
}
inline ::Fusion::NetworkObjectTypeId Fusion::NetworkObjectTypeId::FromPrefabId(::Fusion::NetworkPrefabId  prefabId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectTypeId>(),
                        {"FromPrefabId", {}, {::i2c::type_of<::Fusion::NetworkPrefabId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkObjectTypeId>(nullptr, ___internal_method, prefabId);
}
inline ::Fusion::NetworkPrefabId Fusion::NetworkObjectTypeId::get_AsPrefabId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectTypeId>(),
                        {"get_AsPrefabId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkPrefabId>(*this, ___internal_method);
}
inline ::Fusion::NetworkObjectTypeId Fusion::NetworkObjectTypeId::FromCustom(uint32_t  raw)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectTypeId>(),
                        {"FromCustom", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkObjectTypeId>(nullptr, ___internal_method, raw);
}
inline uint32_t Fusion::NetworkObjectTypeId::get_AsCustom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectTypeId>(),
                        {"get_AsCustom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline ::Fusion::NetworkObjectTypeId Fusion::NetworkObjectTypeId::FromStruct(uint16_t  structId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectTypeId>(),
                        {"FromStruct", {}, {::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkObjectTypeId>(nullptr, ___internal_method, structId);
}
inline uint16_t Fusion::NetworkObjectTypeId::get_AsInternalStructId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectTypeId>(),
                        {"get_AsInternalStructId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(*this, ___internal_method);
}
inline bool Fusion::NetworkObjectTypeId::get_IsNone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectTypeId>(),
                        {"get_IsNone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Fusion::NetworkObjectTypeId::get_IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectTypeId>(),
                        {"get_IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Fusion::NetworkObjectTypeId::get_IsSceneObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectTypeId>(),
                        {"get_IsSceneObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Fusion::NetworkObjectTypeId::get_IsPrefab()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectTypeId>(),
                        {"get_IsPrefab", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Fusion::NetworkObjectTypeId::get_IsStruct()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectTypeId>(),
                        {"get_IsStruct", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Fusion::NetworkObjectTypeId::get_IsCustom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectTypeId>(),
                        {"get_IsCustom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Fusion::NetworkObjectTypeId::Equals(::Fusion::NetworkObjectTypeId  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectTypeId>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::NetworkObjectTypeId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t Fusion::NetworkObjectTypeId::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkObjectTypeId>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool Fusion::NetworkObjectTypeId::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkObjectTypeId>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline ::StringW Fusion::NetworkObjectTypeId::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkObjectTypeId>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool Fusion::NetworkObjectTypeId::op_Equality(::Fusion::NetworkObjectTypeId  a, ::Fusion::NetworkObjectTypeId  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectTypeId>(),
                        {"op_Equality", {}, {::i2c::type_of<::Fusion::NetworkObjectTypeId>(), ::i2c::type_of<::Fusion::NetworkObjectTypeId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Fusion::NetworkObjectTypeId::op_Inequality(::Fusion::NetworkObjectTypeId  a, ::Fusion::NetworkObjectTypeId  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectTypeId>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Fusion::NetworkObjectTypeId>(), ::i2c::type_of<::Fusion::NetworkObjectTypeId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline ::Fusion::NetworkObjectTypeId Fusion::NetworkObjectTypeId::op_Implicit___Fusion__NetworkObjectTypeId(::Fusion::NetworkPrefabId  prefabId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectTypeId>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Fusion::NetworkPrefabId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkObjectTypeId>(nullptr, ___internal_method, prefabId);
}
inline void Fusion::NetworkObjectTypeId::WriteInternal(::Fusion::NetworkObjectTypeId  typeId, ::Fusion::Sockets::NetBitBuffer*  buffer, int32_t  blockSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectTypeId>(),
                        {"WriteInternal", {}, {::i2c::type_of<::Fusion::NetworkObjectTypeId>(), ::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, typeId, buffer, blockSize);
}
inline ::Fusion::NetworkObjectTypeId Fusion::NetworkObjectTypeId::ReadInternal(::Fusion::Sockets::NetBitBuffer*  buffer, int32_t  blockSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectTypeId>(),
                        {"ReadInternal", {}, {::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkObjectTypeId>(nullptr, ___internal_method, buffer, blockSize);
}
/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr  Fusion::NetworkObjectTypeId::operator ::Fusion::INetworkStruct*()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* Fusion::NetworkObjectTypeId::i___Fusion__INetworkStruct()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Fusion::NetworkObjectTypeId>"
constexpr  Fusion::NetworkObjectTypeId::operator ::System::IEquatable_1<::Fusion::NetworkObjectTypeId>*()  {
return static_cast<::System::IEquatable_1<::Fusion::NetworkObjectTypeId>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Fusion::NetworkObjectTypeId>"
constexpr ::System::IEquatable_1<::Fusion::NetworkObjectTypeId>* Fusion::NetworkObjectTypeId::i___System__IEquatable_1___Fusion__NetworkObjectTypeId_()  {
return static_cast<::System::IEquatable_1<::Fusion::NetworkObjectTypeId>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_value0", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_value1", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::NetworkObjectTypeId::NetworkObjectTypeId(uint32_t  _value0, uint32_t  _value1) noexcept  {
this->_value0 = _value0;
this->_value1 = _value1;
}
// Ctor Parameters []
constexpr ::Fusion::NetworkObjectTypeId::NetworkObjectTypeId()   {
}
//  Writing Method size for method: ::Fusion::NetworkObjectTypeId_EqualityComparer.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkObjectTypeId_EqualityComparer::*)(::Fusion::NetworkObjectTypeId, ::Fusion::NetworkObjectTypeId)>(&::Fusion::NetworkObjectTypeId_EqualityComparer::Equals)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5fcd81c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectTypeId_EqualityComparer*>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::NetworkObjectTypeId>(), ::i2c::type_of<::Fusion::NetworkObjectTypeId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectTypeId_EqualityComparer.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkObjectTypeId_EqualityComparer::*)(::Fusion::NetworkObjectTypeId)>(&::Fusion::NetworkObjectTypeId_EqualityComparer::GetHashCode)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5fcd880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectTypeId_EqualityComparer*>(),
                        {"GetHashCode", {}, {::i2c::type_of<::Fusion::NetworkObjectTypeId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectTypeId_EqualityComparer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectTypeId_EqualityComparer::*)()>(&::Fusion::NetworkObjectTypeId_EqualityComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fcd814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectTypeId_EqualityComparer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool Fusion::NetworkObjectTypeId_EqualityComparer::Equals(::Fusion::NetworkObjectTypeId  x, ::Fusion::NetworkObjectTypeId  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectTypeId_EqualityComparer*>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::NetworkObjectTypeId>(), ::i2c::type_of<::Fusion::NetworkObjectTypeId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x, y);
}
inline int32_t Fusion::NetworkObjectTypeId_EqualityComparer::GetHashCode(::Fusion::NetworkObjectTypeId  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectTypeId_EqualityComparer*>(),
                        {"GetHashCode", {}, {::i2c::type_of<::Fusion::NetworkObjectTypeId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, obj);
}
inline void Fusion::NetworkObjectTypeId_EqualityComparer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectTypeId_EqualityComparer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkObjectTypeId_EqualityComparer* Fusion::NetworkObjectTypeId_EqualityComparer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkObjectTypeId_EqualityComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::Fusion::NetworkObjectTypeId>"
constexpr  Fusion::NetworkObjectTypeId_EqualityComparer::operator ::System::Collections::Generic::IEqualityComparer_1<::Fusion::NetworkObjectTypeId>*() noexcept {
return static_cast<::System::Collections::Generic::IEqualityComparer_1<::Fusion::NetworkObjectTypeId>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::Fusion::NetworkObjectTypeId>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::Fusion::NetworkObjectTypeId>* Fusion::NetworkObjectTypeId_EqualityComparer::i___System__Collections__Generic__IEqualityComparer_1___Fusion__NetworkObjectTypeId_() noexcept {
return static_cast<::System::Collections::Generic::IEqualityComparer_1<::Fusion::NetworkObjectTypeId>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::NetworkObjectTypeId_EqualityComparer::NetworkObjectTypeId_EqualityComparer()   {
}
