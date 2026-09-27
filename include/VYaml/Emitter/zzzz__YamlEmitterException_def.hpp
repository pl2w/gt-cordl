#pragma once
// IWYU pragma private; include "VYaml/Emitter/YamlEmitterException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(YamlEmitterException)
// Forward declare root types
namespace VYaml::Emitter {
class YamlEmitterException;
}
// Write type traits
MARK_REF_T(::VYaml::Emitter::YamlEmitterException*);
DEFINE_IL2CPP_CLASS(::VYaml::Emitter::YamlEmitterException*, "VYaml.Emitter", "YamlEmitterException");
// Dependencies System.Exception
namespace VYaml::Emitter {
// Is value type: false
// CS Name: VYaml.Emitter.YamlEmitterException
class CORDL_TYPE YamlEmitterException : public ::System::Exception {
public:
// Declarations
/// @brief [NullableContext(1)]
static inline ::VYaml::Emitter::YamlEmitterException* New_ctor(::StringW  message) ;

/// [NullableContext(1)]
/// @brief Method .ctor, addr 0xb96c730, size 0x68, virtual false, abstract: false, final false
inline void _ctor(::StringW  message) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr YamlEmitterException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "YamlEmitterException", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
YamlEmitterException(YamlEmitterException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "YamlEmitterException", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
YamlEmitterException(YamlEmitterException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29040};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::VYaml::Emitter::YamlEmitterException) == 0x90, "Size mismatch!");

} // namespace end def VYaml::Emitter
