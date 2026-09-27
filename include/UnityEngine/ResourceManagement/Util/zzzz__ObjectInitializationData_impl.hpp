#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Util/ObjectInitializationData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__SerializedType_impl.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__ObjectInitializationData_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__BinaryStorageBuffer_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__ObjectInitializationData_Serializer_Data_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__ObjectInitializationData_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__SerializedType_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__ResourceManager_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::ObjectInitializationData.get_Id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::ResourceManagement::Util::ObjectInitializationData::*)()>(&::UnityEngine::ResourceManagement::Util::ObjectInitializationData::get_Id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb2fbf60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>(),
                        {"get_Id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::ObjectInitializationData.get_ObjectType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::Util::SerializedType (::UnityEngine::ResourceManagement::Util::ObjectInitializationData::*)()>(&::UnityEngine::ResourceManagement::Util::ObjectInitializationData::get_ObjectType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb2fbf68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>(),
                        {"get_ObjectType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::ObjectInitializationData.get_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::ResourceManagement::Util::ObjectInitializationData::*)()>(&::UnityEngine::ResourceManagement::Util::ObjectInitializationData::get_Data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb2fbf78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>(),
                        {"get_Data", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::ObjectInitializationData.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::ResourceManagement::Util::ObjectInitializationData::*)()>(&::UnityEngine::ResourceManagement::Util::ObjectInitializationData::ToString)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xb2fbf80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>(),
                    {::i2c::class_of<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::ObjectInitializationData.GetAsyncInitHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle (::UnityEngine::ResourceManagement::Util::ObjectInitializationData::*)(::UnityEngine::ResourceManagement::ResourceManager*, ::StringW)>(&::UnityEngine::ResourceManagement::Util::ObjectInitializationData::GetAsyncInitHandle)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0xb2fc018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>(),
                        {"GetAsyncInitHandle", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::ResourceManager*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::ResourceManagement::Util::ObjectInitializationData::get_Id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>(),
                        {"get_Id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::Util::SerializedType UnityEngine::ResourceManagement::Util::ObjectInitializationData::get_ObjectType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>(),
                        {"get_ObjectType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::Util::SerializedType>(*this, ___internal_method);
}
inline ::StringW UnityEngine::ResourceManagement::Util::ObjectInitializationData::get_Data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>(),
                        {"get_Data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW UnityEngine::ResourceManagement::Util::ObjectInitializationData::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
template<typename TObject>
inline TObject UnityEngine::ResourceManagement::Util::ObjectInitializationData::CreateInstance(::StringW  idOverride)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>(),
                    {"CreateInstance", {::i2c::class_of<TObject>()}, {::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TObject>()}
                )));
return ::cordl_internals::RunMethodRethrow<TObject>(*this, ___internal_method, idOverride);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle UnityEngine::ResourceManagement::Util::ObjectInitializationData::GetAsyncInitHandle(::UnityEngine::ResourceManagement::ResourceManager*  rm, ::StringW  idOverride)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>(),
                        {"GetAsyncInitHandle", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::ResourceManager*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(*this, ___internal_method, rm, idOverride);
}
// Ctor Parameters [CppParam { name: "m_Id", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_ObjectType", ty: "::UnityEngine::ResourceManagement::Util::SerializedType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Data", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::ResourceManagement::Util::ObjectInitializationData::ObjectInitializationData(::StringW  m_Id, ::UnityEngine::ResourceManagement::Util::SerializedType  m_ObjectType, ::StringW  m_Data) noexcept  {
this->m_Id = m_Id;
this->m_ObjectType = m_ObjectType;
this->m_Data = m_Data;
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::Util::ObjectInitializationData::ObjectInitializationData()   {
}
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::ObjectInitializationData_Serializer.get_Dependencies
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>* (::UnityEngine::ResourceManagement::Util::ObjectInitializationData_Serializer::*)()>(&::UnityEngine::ResourceManagement::Util::ObjectInitializationData_Serializer::get_Dependencies)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb2fc284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourceManagement::Util::ObjectInitializationData_Serializer*>(),
                        {"get_Dependencies", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::ObjectInitializationData_Serializer.Deserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::ResourceManagement::Util::ObjectInitializationData_Serializer::*)(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*, ::System::Type*, uint32_t, ::by_ref<uint32_t>)>(&::UnityEngine::ResourceManagement::Util::ObjectInitializationData_Serializer::Deserialize)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xb2fc28c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourceManagement::Util::ObjectInitializationData_Serializer*>(),
                        {"Deserialize", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::ObjectInitializationData_Serializer.Serialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::ResourceManagement::Util::ObjectInitializationData_Serializer::*)(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*, ::System::Object*)>(&::UnityEngine::ResourceManagement::Util::ObjectInitializationData_Serializer::Serialize)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xb2fc444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourceManagement::Util::ObjectInitializationData_Serializer*>(),
                        {"Serialize", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::ObjectInitializationData_Serializer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::Util::ObjectInitializationData_Serializer::*)()>(&::UnityEngine::ResourceManagement::Util::ObjectInitializationData_Serializer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb2fc564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourceManagement::Util::ObjectInitializationData_Serializer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>* UnityEngine::ResourceManagement::Util::ObjectInitializationData_Serializer::get_Dependencies()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourceManagement::Util::ObjectInitializationData_Serializer*>(),
                        {"get_Dependencies", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>*>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::ResourceManagement::Util::ObjectInitializationData_Serializer::Deserialize(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*  reader, ::System::Type*  t, uint32_t  offset, ::by_ref<uint32_t>  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourceManagement::Util::ObjectInitializationData_Serializer*>(),
                        {"Deserialize", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, reader, t, offset, size);
}
inline uint32_t UnityEngine::ResourceManagement::Util::ObjectInitializationData_Serializer::Serialize(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*  writer, ::System::Object*  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourceManagement::Util::ObjectInitializationData_Serializer*>(),
                        {"Serialize", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, writer, val);
}
inline void UnityEngine::ResourceManagement::Util::ObjectInitializationData_Serializer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourceManagement::Util::ObjectInitializationData_Serializer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::Util::ObjectInitializationData_Serializer* UnityEngine::ResourceManagement::Util::ObjectInitializationData_Serializer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ResourceManagement::Util::ObjectInitializationData_Serializer*>());
}
/// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>"
constexpr  UnityEngine::ResourceManagement::Util::ObjectInitializationData_Serializer::operator ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>*() noexcept {
return static_cast<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>"
constexpr ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>* UnityEngine::ResourceManagement::Util::ObjectInitializationData_Serializer::i___UnityEngine__ResourceManagement__Util__BinaryStorageBuffer_ISerializationAdapter_1___UnityEngine__ResourceManagement__Util__ObjectInitializationData_() noexcept {
return static_cast<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter"
constexpr  UnityEngine::ResourceManagement::Util::ObjectInitializationData_Serializer::operator ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*() noexcept {
return static_cast<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter"
constexpr ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter* UnityEngine::ResourceManagement::Util::ObjectInitializationData_Serializer::i___UnityEngine__ResourceManagement__Util__BinaryStorageBuffer_ISerializationAdapter() noexcept {
return static_cast<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::Util::ObjectInitializationData_Serializer::ObjectInitializationData_Serializer()   {
}
