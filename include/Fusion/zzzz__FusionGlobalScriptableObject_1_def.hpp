#pragma once
// IWYU pragma private; include "Fusion/FusionGlobalScriptableObject_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__FusionGlobalScriptableObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(FusionGlobalScriptableObject_1)
namespace Fusion {
class FusionGlobalScriptableObjectUnloadDelegate;
}
// Forward declare root types
namespace Fusion {
template<typename T>
class FusionGlobalScriptableObject_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Fusion::FusionGlobalScriptableObject_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Fusion::FusionGlobalScriptableObject_1, "Fusion", "FusionGlobalScriptableObject`1");
// Dependencies Fusion.FusionGlobalScriptableObject
namespace Fusion {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Fusion.FusionGlobalScriptableObject`1<T>
class CORDL_TYPE FusionGlobalScriptableObject_1 : public ::Fusion::FusionGlobalScriptableObject {
public:
// Declarations
 __declspec(property(get=get_IsGlobal, put=set_IsGlobal)) bool  IsGlobal;

/// @brief Field <IsGlobal>k__BackingField, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsGlobal_k__BackingField, put=__cordl_internal_set__IsGlobal_k__BackingField)) bool  _IsGlobal_k__BackingField;

/// @brief Field s_instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_instance, put=setStaticF_s_instance)) T  s_instance;

/// @brief Field s_unloadHandler, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_unloadHandler, put=setStaticF_s_unloadHandler)) ::Fusion::FusionGlobalScriptableObjectUnloadDelegate*  s_unloadHandler;

/// @brief Method AsId, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::StringW AsId(::Fusion::FusionGlobalScriptableObject_1<T>*  obj) ;

/// @brief Method GetOrLoadGlobalInstance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline T GetOrLoadGlobalInstance() ;

/// @brief Method LoadPlayerInstance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline T LoadPlayerInstance(::by_ref<::Fusion::FusionGlobalScriptableObjectUnloadDelegate*>  unloadHandler) ;

static inline ::Fusion::FusionGlobalScriptableObject_1<T>* New_ctor() ;

/// @brief Method OnDisable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnLoadedAsGlobal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnLoadedAsGlobal() ;

/// @brief Method OnUnloadedAsGlobal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnUnloadedAsGlobal(bool  destroyed) ;

/// @brief Method SetGlobalInternal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void SetGlobalInternal(T  value, ::Fusion::FusionGlobalScriptableObjectUnloadDelegate*  unloadHandler) ;

/// @brief Method TryGetGlobalInternal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline bool TryGetGlobalInternal(::by_ref<T>  global) ;

/// @brief Method UnloadGlobalInternal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline bool UnloadGlobalInternal() ;

constexpr bool const& __cordl_internal_get__IsGlobal_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsGlobal_k__BackingField() ;

constexpr void __cordl_internal_set__IsGlobal_k__BackingField(bool  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline T getStaticF_s_instance() ;

static inline ::Fusion::FusionGlobalScriptableObjectUnloadDelegate* getStaticF_s_unloadHandler() ;

/// @brief Method get_GlobalInternal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline T get_GlobalInternal() ;

/// [CompilerGenerated]
/// @brief Method get_IsGlobal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_IsGlobal() ;

/// @brief Method get_IsGlobalLoadedInternal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline bool get_IsGlobalLoadedInternal() ;

/// @brief Method get_LogPrefix, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::StringW get_LogPrefix() ;

static inline void setStaticF_s_instance(T  value) ;

static inline void setStaticF_s_unloadHandler(::Fusion::FusionGlobalScriptableObjectUnloadDelegate*  value) ;

/// @brief Method set_GlobalInternal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void set_GlobalInternal(T  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsGlobal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_IsGlobal(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FusionGlobalScriptableObject_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionGlobalScriptableObject_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionGlobalScriptableObject_1(FusionGlobalScriptableObject_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionGlobalScriptableObject_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionGlobalScriptableObject_1(FusionGlobalScriptableObject_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31296};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <IsGlobal>k__BackingField, offset: 0x18, size: 0x1, def value: None
 bool  ____IsGlobal_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion
