#pragma once
// IWYU pragma private; include "UnityEngine/AddressableAssets/Utility/SerializationUtilities.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SerializationUtilities)
namespace GlobalNamespace {
struct SerializationUtilities_ObjectType;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets::Utility {
class SerializationUtilities;
}
// Write type traits
MARK_REF_T(::UnityEngine::AddressableAssets::Utility::SerializationUtilities*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AddressableAssets::Utility::SerializationUtilities*, "UnityEngine.AddressableAssets.Utility", "SerializationUtilities");
// Dependencies System.Object
namespace UnityEngine::AddressableAssets::Utility {
// Is value type: false
// CS Name: UnityEngine.AddressableAssets.Utility.SerializationUtilities
class CORDL_TYPE SerializationUtilities : public ::System::Object {
public:
// Declarations
using ObjectType = ::GlobalNamespace::SerializationUtilities_ObjectType;

/// @brief Method ReadInt32FromByteArray, addr 0xae657a8, size 0x70, virtual false, abstract: false, final false
static inline int32_t ReadInt32FromByteArray(::ArrayW<uint8_t>  data, int32_t  offset) ;

/// @brief Method ReadObjectFromByteArray, addr 0xae6589c, size 0x538, virtual false, abstract: false, final false
static inline ::System::Object* ReadObjectFromByteArray(::ArrayW<uint8_t>  keyData, int32_t  dataIndex) ;

/// @brief Method WriteInt32ToByteArray, addr 0xae65818, size 0x84, virtual false, abstract: false, final false
static inline int32_t WriteInt32ToByteArray(::ArrayW<uint8_t>  data, int32_t  val, int32_t  offset) ;

/// @brief Method WriteObjectToByteList, addr 0xae65dd4, size 0x948, virtual false, abstract: false, final false
static inline int32_t WriteObjectToByteList(::System::Object*  obj, ::System::Collections::Generic::List_1<uint8_t>*  buffer) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SerializationUtilities() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SerializationUtilities", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SerializationUtilities(SerializationUtilities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SerializationUtilities", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SerializationUtilities(SerializationUtilities const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29267};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AddressableAssets::Utility::SerializationUtilities) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::AddressableAssets::Utility
