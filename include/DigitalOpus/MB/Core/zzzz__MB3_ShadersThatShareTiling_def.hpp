#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB3_ShadersThatShareTiling.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MB3_ShadersThatShareTiling)
namespace GlobalNamespace {
struct MB3_ShadersThatShareTiling_ShaderThatSharesTiling;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace DigitalOpus::MB::Core {
class MB3_ShadersThatShareTiling;
}
// Write type traits
MARK_REF_T(::DigitalOpus::MB::Core::MB3_ShadersThatShareTiling*);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_ShadersThatShareTiling*, "DigitalOpus.MB.Core", "MB3_ShadersThatShareTiling");
// Dependencies System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_ShadersThatShareTiling
class CORDL_TYPE MB3_ShadersThatShareTiling : public ::System::Object {
public:
// Declarations
using ShaderThatSharesTiling = ::GlobalNamespace::MB3_ShadersThatShareTiling_ShaderThatSharesTiling;

/// @brief Field _singleton, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__singleton, put=setStaticF__singleton)) ::DigitalOpus::MB::Core::MB3_ShadersThatShareTiling*  _singleton;

/// @brief Field shadersThatShareTiling, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_shadersThatShareTiling, put=__cordl_internal_set_shadersThatShareTiling)) ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MB3_ShadersThatShareTiling_ShaderThatSharesTiling>*  shadersThatShareTiling;

/// @brief Method GetScaleAndOffsetForTextureProp, addr 0x9dbc468, size 0x108, virtual false, abstract: false, final false
static inline void GetScaleAndOffsetForTextureProp(::UnityEngine::Material*  m, ::StringW  texturePropName, ::by_ref<::UnityEngine::Vector2>  offset, ::by_ref<::UnityEngine::Vector2>  scale) ;

/// @brief Method GetShadersThatShareTiling, addr 0x9dbc064, size 0x5c, virtual false, abstract: false, final false
static inline ::DigitalOpus::MB::Core::MB3_ShadersThatShareTiling* GetShadersThatShareTiling() ;

/// @brief Method Init, addr 0x9dbc0c0, size 0x3a8, virtual false, abstract: false, final false
static inline void Init() ;

static inline ::DigitalOpus::MB::Core::MB3_ShadersThatShareTiling* New_ctor() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MB3_ShadersThatShareTiling_ShaderThatSharesTiling>* const& __cordl_internal_get_shadersThatShareTiling() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MB3_ShadersThatShareTiling_ShaderThatSharesTiling>*& __cordl_internal_get_shadersThatShareTiling() ;

constexpr void __cordl_internal_set_shadersThatShareTiling(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MB3_ShadersThatShareTiling_ShaderThatSharesTiling>*  value) ;

/// @brief Method .ctor, addr 0x9dbc570, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::DigitalOpus::MB::Core::MB3_ShadersThatShareTiling* getStaticF__singleton() ;

static inline void setStaticF__singleton(::DigitalOpus::MB::Core::MB3_ShadersThatShareTiling*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_ShadersThatShareTiling() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_ShadersThatShareTiling", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_ShadersThatShareTiling(MB3_ShadersThatShareTiling && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_ShadersThatShareTiling", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_ShadersThatShareTiling(MB3_ShadersThatShareTiling const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22731};

/// @brief Field shadersThatShareTiling, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MB3_ShadersThatShareTiling_ShaderThatSharesTiling>*  ___shadersThatShareTiling;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB3_ShadersThatShareTiling, ___shadersThatShareTiling) == 0x10, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB3_ShadersThatShareTiling) == 0x18, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
