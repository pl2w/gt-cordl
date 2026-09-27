#pragma once
// IWYU pragma private; include "GlobalNamespace/SkeletonNetData.hpp"
#include "Fusion/CodeGen/zzzz__FixedStorage@3_impl.hpp"
#include "Fusion/CodeGen/zzzz__FixedStorage@4_impl.hpp"
#include "GlobalNamespace/zzzz__SkeletonNetData_def.hpp"
#include "Fusion/zzzz__INetworkStruct_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SkeletonNetData.get_CurrentState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SkeletonNetData::*)()>(&::GlobalNamespace::SkeletonNetData::get_CurrentState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d10384;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkeletonNetData>(),
                        {"get_CurrentState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SkeletonNetData.set_CurrentState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SkeletonNetData::*)(int32_t)>(&::GlobalNamespace::SkeletonNetData::set_CurrentState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d1038c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkeletonNetData>(),
                        {"set_CurrentState", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SkeletonNetData.get_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::SkeletonNetData::*)()>(&::GlobalNamespace::SkeletonNetData::get_Position)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5d10394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkeletonNetData>(),
                        {"get_Position", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SkeletonNetData.set_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SkeletonNetData::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::SkeletonNetData::set_Position)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5d103d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkeletonNetData>(),
                        {"set_Position", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SkeletonNetData.get_Rotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::GlobalNamespace::SkeletonNetData::*)()>(&::GlobalNamespace::SkeletonNetData::get_Rotation)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5d10430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkeletonNetData>(),
                        {"get_Rotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SkeletonNetData.set_Rotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SkeletonNetData::*)(::UnityEngine::Quaternion)>(&::GlobalNamespace::SkeletonNetData::set_Rotation)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5d10470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkeletonNetData>(),
                        {"set_Rotation", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SkeletonNetData.get_CurrentNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SkeletonNetData::*)()>(&::GlobalNamespace::SkeletonNetData::get_CurrentNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d104d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkeletonNetData>(),
                        {"get_CurrentNode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SkeletonNetData.set_CurrentNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SkeletonNetData::*)(int32_t)>(&::GlobalNamespace::SkeletonNetData::set_CurrentNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d104d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkeletonNetData>(),
                        {"set_CurrentNode", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SkeletonNetData.get_NextNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SkeletonNetData::*)()>(&::GlobalNamespace::SkeletonNetData::get_NextNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d104e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkeletonNetData>(),
                        {"get_NextNode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SkeletonNetData.set_NextNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SkeletonNetData::*)(int32_t)>(&::GlobalNamespace::SkeletonNetData::set_NextNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d104e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkeletonNetData>(),
                        {"set_NextNode", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SkeletonNetData.get_AngerPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SkeletonNetData::*)()>(&::GlobalNamespace::SkeletonNetData::get_AngerPoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d104f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkeletonNetData>(),
                        {"get_AngerPoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SkeletonNetData.set_AngerPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SkeletonNetData::*)(int32_t)>(&::GlobalNamespace::SkeletonNetData::set_AngerPoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d104f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkeletonNetData>(),
                        {"set_AngerPoint", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SkeletonNetData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SkeletonNetData::*)(int32_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, int32_t, int32_t, int32_t)>(&::GlobalNamespace::SkeletonNetData::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5d10500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkeletonNetData>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::SkeletonNetData::__cordl_internal_get__CurrentState_k__BackingField()  {
return this->____CurrentState_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::SkeletonNetData::__cordl_internal_get__CurrentState_k__BackingField() const {
return this->____CurrentState_k__BackingField;
}
constexpr void GlobalNamespace::SkeletonNetData::__cordl_internal_set__CurrentState_k__BackingField(int32_t  value)  {
this->____CurrentState_k__BackingField = value;
}
constexpr ::Fusion::CodeGen::FixedStorage@3& GlobalNamespace::SkeletonNetData::__cordl_internal_get__Position()  {
return this->____Position;
}
constexpr ::Fusion::CodeGen::FixedStorage@3 const& GlobalNamespace::SkeletonNetData::__cordl_internal_get__Position() const {
return this->____Position;
}
constexpr void GlobalNamespace::SkeletonNetData::__cordl_internal_set__Position(::Fusion::CodeGen::FixedStorage@3  value)  {
this->____Position = value;
}
constexpr ::Fusion::CodeGen::FixedStorage@4& GlobalNamespace::SkeletonNetData::__cordl_internal_get__Rotation()  {
return this->____Rotation;
}
constexpr ::Fusion::CodeGen::FixedStorage@4 const& GlobalNamespace::SkeletonNetData::__cordl_internal_get__Rotation() const {
return this->____Rotation;
}
constexpr void GlobalNamespace::SkeletonNetData::__cordl_internal_set__Rotation(::Fusion::CodeGen::FixedStorage@4  value)  {
this->____Rotation = value;
}
constexpr int32_t& GlobalNamespace::SkeletonNetData::__cordl_internal_get__CurrentNode_k__BackingField()  {
return this->____CurrentNode_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::SkeletonNetData::__cordl_internal_get__CurrentNode_k__BackingField() const {
return this->____CurrentNode_k__BackingField;
}
constexpr void GlobalNamespace::SkeletonNetData::__cordl_internal_set__CurrentNode_k__BackingField(int32_t  value)  {
this->____CurrentNode_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::SkeletonNetData::__cordl_internal_get__NextNode_k__BackingField()  {
return this->____NextNode_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::SkeletonNetData::__cordl_internal_get__NextNode_k__BackingField() const {
return this->____NextNode_k__BackingField;
}
constexpr void GlobalNamespace::SkeletonNetData::__cordl_internal_set__NextNode_k__BackingField(int32_t  value)  {
this->____NextNode_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::SkeletonNetData::__cordl_internal_get__AngerPoint_k__BackingField()  {
return this->____AngerPoint_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::SkeletonNetData::__cordl_internal_get__AngerPoint_k__BackingField() const {
return this->____AngerPoint_k__BackingField;
}
constexpr void GlobalNamespace::SkeletonNetData::__cordl_internal_set__AngerPoint_k__BackingField(int32_t  value)  {
this->____AngerPoint_k__BackingField = value;
}
inline int32_t GlobalNamespace::SkeletonNetData::get_CurrentState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkeletonNetData>(),
                        {"get_CurrentState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::SkeletonNetData::set_CurrentState(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkeletonNetData>(),
                        {"set_CurrentState", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 GlobalNamespace::SkeletonNetData::get_Position()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkeletonNetData>(),
                        {"get_Position", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline void GlobalNamespace::SkeletonNetData::set_Position(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkeletonNetData>(),
                        {"set_Position", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Quaternion GlobalNamespace::SkeletonNetData::get_Rotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkeletonNetData>(),
                        {"get_Rotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(*this, ___internal_method);
}
inline void GlobalNamespace::SkeletonNetData::set_Rotation(::UnityEngine::Quaternion  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkeletonNetData>(),
                        {"set_Rotation", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t GlobalNamespace::SkeletonNetData::get_CurrentNode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkeletonNetData>(),
                        {"get_CurrentNode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::SkeletonNetData::set_CurrentNode(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkeletonNetData>(),
                        {"set_CurrentNode", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t GlobalNamespace::SkeletonNetData::get_NextNode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkeletonNetData>(),
                        {"get_NextNode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::SkeletonNetData::set_NextNode(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkeletonNetData>(),
                        {"set_NextNode", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t GlobalNamespace::SkeletonNetData::get_AngerPoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkeletonNetData>(),
                        {"get_AngerPoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::SkeletonNetData::set_AngerPoint(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkeletonNetData>(),
                        {"set_AngerPoint", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void GlobalNamespace::SkeletonNetData::_ctor(int32_t  state, ::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot, int32_t  cNode, int32_t  nNode, int32_t  angerPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkeletonNetData>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, state, pos, rot, cNode, nNode, angerPoint);
}
/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr  GlobalNamespace::SkeletonNetData::operator ::Fusion::INetworkStruct*()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* GlobalNamespace::SkeletonNetData::i___Fusion__INetworkStruct()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_CurrentState_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Position", ty: "::Fusion::CodeGen::FixedStorage@3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Rotation", ty: "::Fusion::CodeGen::FixedStorage@4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_CurrentNode_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_NextNode_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_AngerPoint_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SkeletonNetData::SkeletonNetData(int32_t  _CurrentState_k__BackingField, ::Fusion::CodeGen::FixedStorage@3  _Position, ::Fusion::CodeGen::FixedStorage@4  _Rotation, int32_t  _CurrentNode_k__BackingField, int32_t  _NextNode_k__BackingField, int32_t  _AngerPoint_k__BackingField) noexcept  {
this->_CurrentState_k__BackingField = _CurrentState_k__BackingField;
this->_Position = _Position;
this->_Rotation = _Rotation;
this->_CurrentNode_k__BackingField = _CurrentNode_k__BackingField;
this->_NextNode_k__BackingField = _NextNode_k__BackingField;
this->_AngerPoint_k__BackingField = _AngerPoint_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SkeletonNetData::SkeletonNetData()   {
}
