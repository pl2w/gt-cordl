#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomSerializer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CustomSerializer)
namespace GlobalNamespace {
class NetEventOptions;
}
namespace System::IO {
class BinaryReader;
}
namespace System::IO {
class BinaryWriter;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class CustomSerializer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CustomSerializer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomSerializer*, "", "CustomSerializer");
// [Extension]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomSerializer
class CORDL_TYPE CustomSerializer : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method ByteDeserialize, addr 0x56d41ac, size 0x4, virtual false, abstract: false, final false
static inline ::System::Object* ByteDeserialize(::ArrayW<uint8_t>  bytes) ;

/// [Extension]
/// @brief Method ByteSerialize, addr 0x56d3f24, size 0x4, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> ByteSerialize(::System::Object*  obj) ;

/// @brief Method Deserialize, addr 0x56d41b0, size 0x260, virtual false, abstract: false, final false
static inline ::System::Object* Deserialize(::ArrayW<uint8_t>  data) ;

/// @brief Method DeserializeNetEventOptions, addr 0x56d5050, size 0x134, virtual false, abstract: false, final false
static inline ::GlobalNamespace::NetEventOptions* DeserializeNetEventOptions(::System::IO::BinaryReader*  reader) ;

/// @brief Method DeserializeObject, addr 0x56d49e4, size 0x3f0, virtual false, abstract: false, final false
static inline ::System::Object* DeserializeObject(::System::IO::BinaryReader*  reader) ;

/// @brief Method DeserializeObjectArray, addr 0x56d4f4c, size 0x104, virtual false, abstract: false, final false
static inline ::ArrayW<::System::Object*> DeserializeObjectArray(::System::IO::BinaryReader*  reader) ;

/// @brief Method Serialize, addr 0x56d3f28, size 0x284, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> Serialize(::System::Object*  obj) ;

/// @brief Method SerializeNetEventOptions, addr 0x56d4e5c, size 0xf0, virtual false, abstract: false, final false
static inline void SerializeNetEventOptions(::System::IO::BinaryWriter*  writer, ::GlobalNamespace::NetEventOptions*  options) ;

/// @brief Method SerializeObject, addr 0x56d4410, size 0x5d4, virtual false, abstract: false, final false
static inline void SerializeObject(::System::IO::BinaryWriter*  writer, ::System::Object*  obj) ;

/// @brief Method SerializeObjectArray, addr 0x56d4dd4, size 0x88, virtual false, abstract: false, final false
static inline void SerializeObjectArray(::System::IO::BinaryWriter*  writer, ::ArrayW<::System::Object*>  objects) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomSerializer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomSerializer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomSerializer(CustomSerializer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomSerializer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomSerializer(CustomSerializer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1073};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::CustomSerializer) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
