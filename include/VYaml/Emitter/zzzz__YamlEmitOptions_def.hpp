#pragma once
// IWYU pragma private; include "VYaml/Emitter/YamlEmitOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(YamlEmitOptions)
// Forward declare root types
namespace VYaml::Emitter {
class YamlEmitOptions;
}
// Write type traits
MARK_REF_T(::VYaml::Emitter::YamlEmitOptions*);
DEFINE_IL2CPP_CLASS(::VYaml::Emitter::YamlEmitOptions*, "VYaml.Emitter", "YamlEmitOptions");
// Dependencies System.Object
namespace VYaml::Emitter {
// Is value type: false
// CS Name: VYaml.Emitter.YamlEmitOptions
class CORDL_TYPE YamlEmitOptions : public ::System::Object {
public:
// Declarations
/// @brief Field Default, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Default, put=setStaticF_Default)) ::VYaml::Emitter::YamlEmitOptions*  Default;

 __declspec(property(get=get_IndentWidth, put=set_IndentWidth)) int32_t  IndentWidth;

/// @brief Field <IndentWidth>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__IndentWidth_k__BackingField, put=__cordl_internal_set__IndentWidth_k__BackingField)) int32_t  _IndentWidth_k__BackingField;

static inline ::VYaml::Emitter::YamlEmitOptions* New_ctor() ;

constexpr int32_t const& __cordl_internal_get__IndentWidth_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__IndentWidth_k__BackingField() ;

constexpr void __cordl_internal_set__IndentWidth_k__BackingField(int32_t  value) ;

/// @brief Method .ctor, addr 0xb973018, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::VYaml::Emitter::YamlEmitOptions* getStaticF_Default() ;

/// [CompilerGenerated]
/// @brief Method get_IndentWidth, addr 0xb973008, size 0x8, virtual false, abstract: false, final false
inline int32_t get_IndentWidth() ;

static inline void setStaticF_Default(::VYaml::Emitter::YamlEmitOptions*  value) ;

/// [CompilerGenerated]
/// @brief Method set_IndentWidth, addr 0xb973010, size 0x8, virtual false, abstract: false, final false
inline void set_IndentWidth(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr YamlEmitOptions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "YamlEmitOptions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
YamlEmitOptions(YamlEmitOptions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "YamlEmitOptions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
YamlEmitOptions(YamlEmitOptions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29046};

/// [CompilerGenerated]
/// @brief Field <IndentWidth>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  ____IndentWidth_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VYaml::Emitter::YamlEmitOptions, ____IndentWidth_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::VYaml::Emitter::YamlEmitOptions) == 0x18, "Size mismatch!");

} // namespace end def VYaml::Emitter
