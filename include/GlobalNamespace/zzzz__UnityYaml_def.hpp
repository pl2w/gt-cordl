#pragma once
// IWYU pragma private; include "GlobalNamespace/UnityYaml.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnityYaml)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Reflection {
class Assembly;
}
namespace System {
class Type;
}
// Forward declare root types
namespace GlobalNamespace {
class UnityYaml;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::UnityYaml*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UnityYaml*, "", "UnityYaml");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: UnityYaml
class CORDL_TYPE UnityYaml : public ::System::Object {
public:
// Declarations
/// @brief Field ClassIDToType, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ClassIDToType, put=setStaticF_ClassIDToType)) ::System::Collections::Generic::Dictionary_2<int32_t,::System::Type*>*  ClassIDToType;

/// @brief Field EngineAssembly, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_EngineAssembly, put=setStaticF_EngineAssembly)) ::System::Reflection::Assembly*  EngineAssembly;

/// @brief Field TerrainAssembly, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_TerrainAssembly, put=setStaticF_TerrainAssembly)) ::System::Reflection::Assembly*  TerrainAssembly;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::System::Type*>* getStaticF_ClassIDToType() ;

static inline ::System::Reflection::Assembly* getStaticF_EngineAssembly() ;

static inline ::System::Reflection::Assembly* getStaticF_TerrainAssembly() ;

static inline void setStaticF_ClassIDToType(::System::Collections::Generic::Dictionary_2<int32_t,::System::Type*>*  value) ;

static inline void setStaticF_EngineAssembly(::System::Reflection::Assembly*  value) ;

static inline void setStaticF_TerrainAssembly(::System::Reflection::Assembly*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityYaml() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityYaml", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityYaml(UnityYaml && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityYaml", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityYaml(UnityYaml const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3611};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::UnityYaml) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
