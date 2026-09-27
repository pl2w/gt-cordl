#pragma once
// IWYU pragma private; include "Liv/Lck/Core/LckCoreHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LckCoreHandler)
namespace Liv::Lck::Core {
template<typename T>
class Result_1;
}
// Forward declare root types
namespace Liv::Lck::Core {
class LckCoreHandler;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Core::LckCoreHandler*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Core::LckCoreHandler*, "Liv.Lck.Core", "LckCoreHandler");
// Dependencies System.Object
namespace Liv::Lck::Core {
// Is value type: false
// CS Name: Liv.Lck.Core.LckCoreHandler
class CORDL_TYPE LckCoreHandler : public ::System::Object {
public:
// Declarations
/// @brief Field <LckCoreInitializationResult>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__LckCoreInitializationResult_k__BackingField, put=setStaticF__LckCoreInitializationResult_k__BackingField)) ::Liv::Lck::Core::Result_1<bool>*  _LckCoreInitializationResult_k__BackingField;

/// @brief Method GetRenderPipelineType, addr 0x9d41c7c, size 0x1ac, virtual false, abstract: false, final false
static inline ::StringW GetRenderPipelineType() ;

/// [RuntimeInitializeOnLoadMethod((UnityEngine.RuntimeInitializeLoadType)2)]
/// @brief Method Initialize, addr 0x9d4169c, size 0x4, virtual false, abstract: false, final false
static inline void Initialize() ;

/// @brief Method InitializeInternal, addr 0x9d416a0, size 0x5dc, virtual false, abstract: false, final false
static inline void InitializeInternal() ;

static inline ::Liv::Lck::Core::Result_1<bool>* getStaticF__LckCoreInitializationResult_k__BackingField() ;

/// [CompilerGenerated]
/// @brief Method get_LckCoreInitializationResult, addr 0x9d415fc, size 0x48, virtual false, abstract: false, final false
static inline ::Liv::Lck::Core::Result_1<bool>* get_LckCoreInitializationResult() ;

static inline void setStaticF__LckCoreInitializationResult_k__BackingField(::Liv::Lck::Core::Result_1<bool>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_LckCoreInitializationResult, addr 0x9d41644, size 0x58, virtual false, abstract: false, final false
static inline void set_LckCoreInitializationResult(::Liv::Lck::Core::Result_1<bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckCoreHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckCoreHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckCoreHandler(LckCoreHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckCoreHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckCoreHandler(LckCoreHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24870};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::Core::LckCoreHandler) == 0x10, "Size mismatch!");

} // namespace end def Liv::Lck::Core
