#pragma once
// IWYU pragma private; include "PlayFab/Json/IJsonSerializerStrategy.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IJsonSerializerStrategy)
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace PlayFab::Json {
class IJsonSerializerStrategy;
}
// Write type traits
MARK_REF_T(::PlayFab::Json::IJsonSerializerStrategy*);
DEFINE_IL2CPP_CLASS(::PlayFab::Json::IJsonSerializerStrategy*, "PlayFab.Json", "IJsonSerializerStrategy");
// [GeneratedCode("simple-json", "1.0.0")]
// Dependencies 
namespace PlayFab::Json {
// Is value type: false
// CS Name: PlayFab.Json.IJsonSerializerStrategy
class CORDL_TYPE IJsonSerializerStrategy {
public:
// Declarations
/// @brief Method DeserializeObject, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Object* DeserializeObject(::System::Object*  value, ::System::Type*  type) ;

/// @brief Method TrySerializeNonPrimitiveObject, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool TrySerializeNonPrimitiveObject(::System::Object*  input, ::by_ref<::System::Object*>  output) ;

// Ctor Parameters [CppParam { name: "", ty: "IJsonSerializerStrategy", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IJsonSerializerStrategy(IJsonSerializerStrategy const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19544};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def PlayFab::Json
