#pragma once
// IWYU pragma private; include "Pathfinding/Serialization/TinyJsonDeserializer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TinyJsonDeserializer)
namespace System::Globalization {
class NumberFormatInfo;
}
namespace System::IO {
class TextReader;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Pathfinding::Serialization {
class TinyJsonDeserializer;
}
// Write type traits
MARK_REF_T(::Pathfinding::Serialization::TinyJsonDeserializer*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Serialization::TinyJsonDeserializer*, "Pathfinding.Serialization", "TinyJsonDeserializer");
// Dependencies System.Object
namespace Pathfinding::Serialization {
// Is value type: false
// CS Name: Pathfinding.Serialization.TinyJsonDeserializer
class CORDL_TYPE TinyJsonDeserializer : public ::System::Object {
public:
// Declarations
/// @brief Field builder, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_builder, put=__cordl_internal_set_builder)) ::System::Text::StringBuilder*  builder;

/// @brief Field contextRoot, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_contextRoot, put=__cordl_internal_set_contextRoot)) ::UnityW<::UnityEngine::GameObject>  contextRoot;

/// @brief Field numberFormat, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_numberFormat, put=setStaticF_numberFormat)) ::System::Globalization::NumberFormatInfo*  numberFormat;

/// @brief Field reader, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_reader, put=__cordl_internal_set_reader)) ::System::IO::TextReader*  reader;

/// @brief Method Deserialize, addr 0x5ed0904, size 0xcc, virtual false, abstract: false, final false
static inline ::System::Object* Deserialize(::StringW  text, ::System::Type*  type, ::System::Object*  populate, ::UnityEngine::GameObject*  contextRoot) ;

/// @brief Method Deserialize, addr 0x5ed3a84, size 0xce0, virtual false, abstract: false, final false
inline ::System::Object* Deserialize(::System::Type*  tp, ::System::Object*  populate) ;

/// @brief Method DeserializeUnityObject, addr 0x5ed4a40, size 0x84, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Object> DeserializeUnityObject() ;

/// @brief Method DeserializeUnityObjectInner, addr 0x5ed4c10, size 0x5e8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Object> DeserializeUnityObjectInner() ;

/// @brief Method Eat, addr 0x5ed484c, size 0x1f4, virtual false, abstract: false, final false
inline void Eat(::StringW  s) ;

/// @brief Method EatField, addr 0x5ed4764, size 0x88, virtual false, abstract: false, final false
inline ::StringW EatField() ;

/// @brief Method EatUntil, addr 0x5ed5274, size 0x140, virtual false, abstract: false, final false
inline ::StringW EatUntil(::StringW  c, bool  inString) ;

/// @brief Method EatWhitespace, addr 0x5ed51f8, size 0x7c, virtual false, abstract: false, final false
inline void EatWhitespace() ;

static inline ::Pathfinding::Serialization::TinyJsonDeserializer* New_ctor() ;

/// @brief Method SkipFieldData, addr 0x5ed4ac4, size 0x14c, virtual false, abstract: false, final false
inline void SkipFieldData() ;

/// @brief Method TryEat, addr 0x5ed47ec, size 0x60, virtual false, abstract: false, final false
inline bool TryEat(char16_t  c) ;

constexpr ::System::Text::StringBuilder* const& __cordl_internal_get_builder() const;

constexpr ::System::Text::StringBuilder*& __cordl_internal_get_builder() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_contextRoot() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_contextRoot() ;

constexpr ::System::IO::TextReader* const& __cordl_internal_get_reader() const;

constexpr ::System::IO::TextReader*& __cordl_internal_get_reader() ;

constexpr void __cordl_internal_set_builder(::System::Text::StringBuilder*  value) ;

constexpr void __cordl_internal_set_contextRoot(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_reader(::System::IO::TextReader*  value) ;

/// @brief Method .ctor, addr 0x5ed3a18, size 0x6c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Globalization::NumberFormatInfo* getStaticF_numberFormat() ;

static inline void setStaticF_numberFormat(::System::Globalization::NumberFormatInfo*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TinyJsonDeserializer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TinyJsonDeserializer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TinyJsonDeserializer(TinyJsonDeserializer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TinyJsonDeserializer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TinyJsonDeserializer(TinyJsonDeserializer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21456};

/// @brief Field reader, offset: 0x10, size: 0x8, def value: None
 ::System::IO::TextReader*  ___reader;

/// @brief Field contextRoot, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___contextRoot;

/// @brief Field builder, offset: 0x20, size: 0x8, def value: None
 ::System::Text::StringBuilder*  ___builder;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Serialization::TinyJsonDeserializer, ___reader) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Serialization::TinyJsonDeserializer, ___contextRoot) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Serialization::TinyJsonDeserializer, ___builder) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Serialization::TinyJsonDeserializer) == 0x28, "Size mismatch!");

} // namespace end def Pathfinding::Serialization
