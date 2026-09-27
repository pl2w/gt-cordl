#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Converters/ExpandoObjectConverter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
CORDL_MODULE_EXPORT(ExpandoObjectConverter)
namespace Newtonsoft::Json {
class JsonReader;
}
namespace Newtonsoft::Json {
class JsonSerializer;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class ExpandoObjectConverter;
}
// Write type traits
MARK_REF_T(::Newtonsoft::Json::Converters::ExpandoObjectConverter*);
DEFINE_IL2CPP_CLASS(::Newtonsoft::Json::Converters::ExpandoObjectConverter*, "Newtonsoft.Json.Converters", "ExpandoObjectConverter");
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies Newtonsoft.Json.JsonConverter
namespace Newtonsoft::Json::Converters {
// Is value type: false
// CS Name: Newtonsoft.Json.Converters.ExpandoObjectConverter
class CORDL_TYPE ExpandoObjectConverter : public ::Newtonsoft::Json::JsonConverter {
public:
// Declarations
 __declspec(property(get=get_CanWrite)) bool  CanWrite;

/// @brief Method CanConvert, addr 0xa3ee6e0, size 0x74, virtual true, abstract: false, final false
inline bool CanConvert(::System::Type*  objectType) ;

static inline ::Newtonsoft::Json::Converters::ExpandoObjectConverter* New_ctor() ;

/// @brief Method ReadJson, addr 0xa3ee23c, size 0x4, virtual true, abstract: false, final false
inline ::System::Object* ReadJson(::Newtonsoft::Json::JsonReader*  reader, ::System::Type*  objectType, /* [Nullable(2)] */ ::System::Object*  existingValue, ::Newtonsoft::Json::JsonSerializer*  serializer) ;

/// @brief Method ReadList, addr 0xa3ee558, size 0x188, virtual false, abstract: false, final false
inline ::System::Object* ReadList(::Newtonsoft::Json::JsonReader*  reader) ;

/// @brief Method ReadObject, addr 0xa3ee39c, size 0x1bc, virtual false, abstract: false, final false
inline ::System::Object* ReadObject(::Newtonsoft::Json::JsonReader*  reader) ;

/// @brief Method ReadValue, addr 0xa3ee240, size 0x15c, virtual false, abstract: false, final false
inline ::System::Object* ReadValue(::Newtonsoft::Json::JsonReader*  reader) ;

/// @brief Method WriteJson, addr 0xa3ee238, size 0x4, virtual true, abstract: false, final false
inline void WriteJson(::Newtonsoft::Json::JsonWriter*  writer, /* [Nullable(2)] */ ::System::Object*  value, ::Newtonsoft::Json::JsonSerializer*  serializer) ;

/// @brief Method .ctor, addr 0xa3ee75c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CanWrite, addr 0xa3ee754, size 0x8, virtual true, abstract: false, final false
inline bool get_CanWrite() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ExpandoObjectConverter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ExpandoObjectConverter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ExpandoObjectConverter(ExpandoObjectConverter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExpandoObjectConverter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExpandoObjectConverter(ExpandoObjectConverter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23360};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Newtonsoft::Json::Converters::ExpandoObjectConverter) == 0x10, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Converters
