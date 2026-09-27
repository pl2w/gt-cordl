#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineDebug.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CinemachineDebug)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
template<typename T>
class Action_1;
}
namespace Unity::Cinemachine {
class CinemachineBrain;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineDebug;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineDebug*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineDebug*, "Unity.Cinemachine", "CinemachineDebug");
// Dependencies System.Object
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineDebug
class CORDL_TYPE CinemachineDebug : public ::System::Object {
public:
// Declarations
/// @brief Field GameViewGuidesEnabled, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_GameViewGuidesEnabled, put=setStaticF_GameViewGuidesEnabled)) bool  GameViewGuidesEnabled;

/// @brief Field OnGUIHandlers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnGUIHandlers, put=setStaticF_OnGUIHandlers)) ::System::Action_1<::UnityW<::Unity::Cinemachine::CinemachineBrain>>*  OnGUIHandlers;

/// @brief Field s_AvailableStringBuilders, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_AvailableStringBuilders, put=setStaticF_s_AvailableStringBuilders)) ::System::Collections::Generic::List_1<::System::Text::StringBuilder*>*  s_AvailableStringBuilders;

/// @brief Method ReturnToPool, addr 0xaec2de8, size 0x12c, virtual false, abstract: false, final false
static inline void ReturnToPool(::System::Text::StringBuilder*  sb) ;

/// @brief Method SBFromPool, addr 0xaec2ce4, size 0x104, virtual false, abstract: false, final false
static inline ::System::Text::StringBuilder* SBFromPool() ;

static inline bool getStaticF_GameViewGuidesEnabled() ;

static inline ::System::Action_1<::UnityW<::Unity::Cinemachine::CinemachineBrain>>* getStaticF_OnGUIHandlers() ;

static inline ::System::Collections::Generic::List_1<::System::Text::StringBuilder*>* getStaticF_s_AvailableStringBuilders() ;

static inline void setStaticF_GameViewGuidesEnabled(bool  value) ;

static inline void setStaticF_OnGUIHandlers(::System::Action_1<::UnityW<::Unity::Cinemachine::CinemachineBrain>>*  value) ;

static inline void setStaticF_s_AvailableStringBuilders(::System::Collections::Generic::List_1<::System::Text::StringBuilder*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineDebug() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineDebug", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineDebug(CinemachineDebug && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineDebug", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineDebug(CinemachineDebug const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22384};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Cinemachine::CinemachineDebug) == 0x10, "Size mismatch!");

} // namespace end def Unity::Cinemachine
