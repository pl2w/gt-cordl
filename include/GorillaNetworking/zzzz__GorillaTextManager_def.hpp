#pragma once
// IWYU pragma private; include "GorillaNetworking/GorillaTextManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MonoBehaviourPostTick_def.hpp"
CORDL_MODULE_EXPORT(GorillaTextManager)
namespace GorillaNetworking {
class GorillaText;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GorillaNetworking {
class GorillaTextManager;
}
// Write type traits
MARK_REF_T(::GorillaNetworking::GorillaTextManager*);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::GorillaTextManager*, "GorillaNetworking", "GorillaTextManager");
// Dependencies MonoBehaviourPostTick
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.GorillaTextManager
class CORDL_TYPE GorillaTextManager : public ::GlobalNamespace::MonoBehaviourPostTick {
public:
// Declarations
/// @brief Field gorillaTexts, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_gorillaTexts, put=__cordl_internal_set_gorillaTexts)) ::System::Collections::Generic::List_1<::GorillaNetworking::GorillaText*>*  gorillaTexts;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GorillaNetworking::GorillaTextManager>  instance;

/// @brief Method Awake, addr 0x5c87f8c, size 0xe0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CreateManager, addr 0x5c87e00, size 0x18c, virtual false, abstract: false, final false
static inline void CreateManager() ;

static inline ::GorillaNetworking::GorillaTextManager* New_ctor() ;

/// @brief Method PostTick, addr 0x5c8806c, size 0x88, virtual true, abstract: false, final false
inline void PostTick() ;

/// @brief Method RegisterText, addr 0x5c878d8, size 0x16c, virtual false, abstract: false, final false
static inline void RegisterText(::GorillaNetworking::GorillaText*  text) ;

constexpr ::System::Collections::Generic::List_1<::GorillaNetworking::GorillaText*>* const& __cordl_internal_get_gorillaTexts() const;

constexpr ::System::Collections::Generic::List_1<::GorillaNetworking::GorillaText*>*& __cordl_internal_get_gorillaTexts() ;

constexpr void __cordl_internal_set_gorillaTexts(::System::Collections::Generic::List_1<::GorillaNetworking::GorillaText*>*  value) ;

/// @brief Method .ctor, addr 0x5c880f4, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GorillaNetworking::GorillaTextManager> getStaticF_instance() ;

static inline void setStaticF_instance(::UnityW<::GorillaNetworking::GorillaTextManager>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaTextManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaTextManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaTextManager(GorillaTextManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaTextManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaTextManager(GorillaTextManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4338};

/// @brief Field gorillaTexts, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GorillaNetworking::GorillaText*>*  ___gorillaTexts;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::GorillaTextManager, ___gorillaTexts) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::GorillaTextManager) == 0x30, "Size mismatch!");

} // namespace end def GorillaNetworking
