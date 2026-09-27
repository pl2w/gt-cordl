#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/ShaderTextureProperty.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ShaderTextureProperty)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace DigitalOpus::MB::Core {
class ShaderTextureProperty;
}
// Write type traits
MARK_REF_T(::DigitalOpus::MB::Core::ShaderTextureProperty*);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::ShaderTextureProperty*, "DigitalOpus.MB.Core", "ShaderTextureProperty");
// Dependencies System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.ShaderTextureProperty
class CORDL_TYPE ShaderTextureProperty : public ::System::Object {
public:
// Declarations
/// @brief Field isGammaCorrected, offset 0x19, size 0x1 
 __declspec(property(get=__cordl_internal_get_isGammaCorrected, put=__cordl_internal_set_isGammaCorrected)) bool  isGammaCorrected;

/// @brief Field isNormalDontKnow, offset 0x1a, size 0x1 
 __declspec(property(get=__cordl_internal_get_isNormalDontKnow, put=__cordl_internal_set_isNormalDontKnow)) bool  isNormalDontKnow;

/// @brief Field isNormalMap, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_isNormalMap, put=__cordl_internal_set_isNormalMap)) bool  isNormalMap;

/// @brief Field name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

/// @brief Method Equals, addr 0x9dc90cc, size 0xa8, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode, addr 0x9dc9174, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetNames, addr 0x9dc917c, size 0xf0, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> GetNames(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  props) ;

static inline ::DigitalOpus::MB::Core::ShaderTextureProperty* New_ctor(::StringW  n, bool  norm) ;

static inline ::DigitalOpus::MB::Core::ShaderTextureProperty* New_ctor(::StringW  n, bool  norm, bool  isGamma, bool  isNormalDontKnow) ;

constexpr bool const& __cordl_internal_get_isGammaCorrected() const;

constexpr bool& __cordl_internal_get_isGammaCorrected() ;

constexpr bool const& __cordl_internal_get_isNormalDontKnow() const;

constexpr bool& __cordl_internal_get_isNormalDontKnow() ;

constexpr bool const& __cordl_internal_get_isNormalMap() const;

constexpr bool& __cordl_internal_get_isNormalMap() ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr void __cordl_internal_set_isGammaCorrected(bool  value) ;

constexpr void __cordl_internal_set_isNormalDontKnow(bool  value) ;

constexpr void __cordl_internal_set_isNormalMap(bool  value) ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

/// @brief Method .ctor, addr 0x9dc9030, size 0x48, virtual false, abstract: false, final false
inline void _ctor(::StringW  n, bool  norm) ;

/// @brief Method .ctor, addr 0x9dc9078, size 0x54, virtual false, abstract: false, final false
inline void _ctor(::StringW  n, bool  norm, bool  isGamma, bool  isNormalDontKnow) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ShaderTextureProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ShaderTextureProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ShaderTextureProperty(ShaderTextureProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShaderTextureProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShaderTextureProperty(ShaderTextureProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22769};

/// @brief Field name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___name;

/// @brief Field isNormalMap, offset: 0x18, size: 0x1, def value: None
 bool  ___isNormalMap;

/// @brief Field isGammaCorrected, offset: 0x19, size: 0x1, def value: None
 bool  ___isGammaCorrected;

/// [HideInInspector]
/// @brief Field isNormalDontKnow, offset: 0x1a, size: 0x1, def value: None
 bool  ___isNormalDontKnow;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::ShaderTextureProperty, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::ShaderTextureProperty, ___isNormalMap) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::ShaderTextureProperty, ___isGammaCorrected) == 0x19, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::ShaderTextureProperty, ___isNormalDontKnow) == 0x1a, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::ShaderTextureProperty) == 0x20, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
