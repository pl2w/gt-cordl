#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/SerializableSourceBlendShape2Combined.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__SerializableSourceBlendShape2Combined_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_MeshCombiner_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined.SetBuffers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined::*)(::ArrayW<::UnityEngine::GameObject*>, ::ArrayW<int32_t>, ::ArrayW<::UnityEngine::GameObject*>, ::ArrayW<int32_t>)>(&::DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined::SetBuffers)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9dbe158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined*>(),
                        {"SetBuffers", {}, {::i2c::type_of<::ArrayW<::UnityEngine::GameObject*>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<::UnityEngine::GameObject*>>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined.DebugPrint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined::*)()>(&::DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined::DebugPrint)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x9dbe1b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined*>(),
                        {"DebugPrint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined.GenerateMapFromSerializedData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeKey*,::DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeValue*>* (::DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined::*)()>(&::DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined::GenerateMapFromSerializedData)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x9dbe454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined*>(),
                        {"GenerateMapFromSerializedData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined::*)()>(&::DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dbd890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined::__cordl_internal_get_srcGameObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___srcGameObject;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined::__cordl_internal_get_srcGameObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___srcGameObject;
}
constexpr void DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined::__cordl_internal_set_srcGameObject(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___srcGameObject = value;
}
constexpr ::ArrayW<int32_t>& DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined::__cordl_internal_get_srcBlendShapeIdx()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___srcBlendShapeIdx;
}
constexpr ::ArrayW<int32_t> const& DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined::__cordl_internal_get_srcBlendShapeIdx() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___srcBlendShapeIdx;
}
constexpr void DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined::__cordl_internal_set_srcBlendShapeIdx(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___srcBlendShapeIdx = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined::__cordl_internal_get_combinedMeshTargetGameObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___combinedMeshTargetGameObject;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined::__cordl_internal_get_combinedMeshTargetGameObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___combinedMeshTargetGameObject;
}
constexpr void DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined::__cordl_internal_set_combinedMeshTargetGameObject(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___combinedMeshTargetGameObject = value;
}
constexpr ::ArrayW<int32_t>& DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined::__cordl_internal_get_blendShapeIdx()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blendShapeIdx;
}
constexpr ::ArrayW<int32_t> const& DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined::__cordl_internal_get_blendShapeIdx() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blendShapeIdx;
}
constexpr void DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined::__cordl_internal_set_blendShapeIdx(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blendShapeIdx = value;
}
inline void DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined::SetBuffers(::ArrayW<::UnityEngine::GameObject*>  srcGameObjs, ::ArrayW<int32_t>  srcBlendShapeIdxs, ::ArrayW<::UnityEngine::GameObject*>  targGameObjs, ::ArrayW<int32_t>  targBlendShapeIdx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined*>(),
                        {"SetBuffers", {}, {::i2c::type_of<::ArrayW<::UnityEngine::GameObject*>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<::UnityEngine::GameObject*>>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, srcGameObjs, srcBlendShapeIdxs, targGameObjs, targBlendShapeIdx);
}
inline void DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined::DebugPrint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined*>(),
                        {"DebugPrint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeKey*,::DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeValue*>* DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined::GenerateMapFromSerializedData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined*>(),
                        {"GenerateMapFromSerializedData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeKey*,::DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeValue*>*>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined* DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined*>());
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined::SerializableSourceBlendShape2Combined()   {
}
