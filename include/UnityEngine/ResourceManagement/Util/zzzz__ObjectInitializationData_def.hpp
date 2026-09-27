#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Util/ObjectInitializationData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__SerializedType_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectInitializationData)
namespace GlobalNamespace {
struct Serializer_ObjectInitializationData_Data;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
namespace UnityEngine::ResourceManagement::Util {
template<typename T>
class BinaryStorageBuffer_ISerializationAdapter_1;
}
namespace UnityEngine::ResourceManagement::Util {
class BinaryStorageBuffer_ISerializationAdapter;
}
namespace UnityEngine::ResourceManagement::Util {
class BinaryStorageBuffer_Reader;
}
namespace UnityEngine::ResourceManagement::Util {
class BinaryStorageBuffer_Writer;
}
namespace UnityEngine::ResourceManagement::Util {
class ObjectInitializationData_Serializer;
}
namespace UnityEngine::ResourceManagement::Util {
struct SerializedType;
}
namespace UnityEngine::ResourceManagement {
class ResourceManager;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Util {
class ObjectInitializationData_Serializer;
}
namespace UnityEngine::ResourceManagement::Util {
struct ObjectInitializationData;
}
// Write type traits
MARK_REF_T(::UnityEngine::ResourceManagement::Util::ObjectInitializationData_Serializer*);
MARK_VAL_T(::UnityEngine::ResourceManagement::Util::ObjectInitializationData);
DEFINE_IL2CPP_CLASS(::UnityEngine::ResourceManagement::Util::ObjectInitializationData_Serializer*, "UnityEngine.ResourceManagement.Util", "ObjectInitializationData/Serializer");
DEFINE_IL2CPP_CLASS(::UnityEngine::ResourceManagement::Util::ObjectInitializationData, "UnityEngine.ResourceManagement.Util", "ObjectInitializationData");
// Dependencies UnityEngine.ResourceManagement.Util.SerializedType
namespace UnityEngine::ResourceManagement::Util {
// Is value type: true
// CS Name: UnityEngine.ResourceManagement.Util.ObjectInitializationData
struct CORDL_TYPE ObjectInitializationData {
public:
// Declarations
using Serializer = ::UnityEngine::ResourceManagement::Util::ObjectInitializationData_Serializer;

 __declspec(property(get=get_Data)) ::StringW  Data;

 __declspec(property(get=get_Id)) ::StringW  Id;

 __declspec(property(get=get_ObjectType)) ::UnityEngine::ResourceManagement::Util::SerializedType  ObjectType;

/// @brief Method CreateInstance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TObject>
inline TObject CreateInstance(::StringW  idOverride) ;

/// @brief Method GetAsyncInitHandle, addr 0xb2fc018, size 0x26c, virtual false, abstract: false, final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle GetAsyncInitHandle(::UnityEngine::ResourceManagement::ResourceManager*  rm, ::StringW  idOverride) ;

/// @brief Method ToString, addr 0xb2fbf80, size 0x98, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method get_Data, addr 0xb2fbf78, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Data() ;

/// @brief Method get_Id, addr 0xb2fbf60, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Id() ;

/// @brief Method get_ObjectType, addr 0xb2fbf68, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::ResourceManagement::Util::SerializedType get_ObjectType() ;

// Ctor Parameters []
// @brief default ctor
constexpr ObjectInitializationData() ;

// Ctor Parameters [CppParam { name: "m_Id", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ObjectType", ty: "::UnityEngine::ResourceManagement::Util::SerializedType", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Data", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr ObjectInitializationData(::StringW  m_Id, ::UnityEngine::ResourceManagement::Util::SerializedType  m_ObjectType, ::StringW  m_Data) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28592};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// [FormerlySerializedAs("m_id")]
/// [SerializeField]
/// @brief Field m_Id, offset: 0x0, size: 0x8, def value: None
 ::StringW  m_Id;

/// [FormerlySerializedAs("m_objectType")]
/// [SerializeField]
/// @brief Field m_ObjectType, offset: 0x8, size: 0x20, def value: None
 ::UnityEngine::ResourceManagement::Util::SerializedType  m_ObjectType;

/// [FormerlySerializedAs("m_data")]
/// [SerializeField]
/// @brief Field m_Data, offset: 0x28, size: 0x8, def value: None
 ::StringW  m_Data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ResourceManagement::Util::ObjectInitializationData, m_Id) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Util::ObjectInitializationData, m_ObjectType) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Util::ObjectInitializationData, m_Data) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::ResourceManagement::Util::ObjectInitializationData) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::ResourceManagement::Util
// Dependencies System.Object
namespace UnityEngine::ResourceManagement::Util {
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.Util.ObjectInitializationData/Serializer
class CORDL_TYPE ObjectInitializationData_Serializer : public ::System::Object {
public:
// Declarations
using Data = ::GlobalNamespace::Serializer_ObjectInitializationData_Data;

 __declspec(property(get=get_Dependencies)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>*  Dependencies;

/// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter"
constexpr operator  ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*() noexcept;

/// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>"
constexpr operator  ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>*() noexcept;

/// @brief Method Deserialize, addr 0xb2fc28c, size 0x1b8, virtual true, abstract: false, final true
inline ::System::Object* Deserialize(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*  reader, ::System::Type*  t, uint32_t  offset, ::by_ref<uint32_t>  size) ;

static inline ::UnityEngine::ResourceManagement::Util::ObjectInitializationData_Serializer* New_ctor() ;

/// @brief Method Serialize, addr 0xb2fc444, size 0x120, virtual true, abstract: false, final true
inline uint32_t Serialize(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*  writer, ::System::Object*  val) ;

/// @brief Method .ctor, addr 0xb2fc564, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Dependencies, addr 0xb2fc284, size 0x8, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>* get_Dependencies() ;

/// @brief Convert to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter"
constexpr ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter* i___UnityEngine__ResourceManagement__Util__BinaryStorageBuffer_ISerializationAdapter() noexcept;

/// @brief Convert to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>"
constexpr ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>* i___UnityEngine__ResourceManagement__Util__BinaryStorageBuffer_ISerializationAdapter_1___UnityEngine__ResourceManagement__Util__ObjectInitializationData_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ObjectInitializationData_Serializer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ObjectInitializationData_Serializer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ObjectInitializationData_Serializer(ObjectInitializationData_Serializer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObjectInitializationData_Serializer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjectInitializationData_Serializer(ObjectInitializationData_Serializer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28591};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::ResourceManagement::Util::ObjectInitializationData_Serializer) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::ResourceManagement::Util
