#pragma once
// IWYU pragma private; include "Liv/Lck/UI/LckQualitySelector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/zzzz__QualityOption_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LckQualitySelector)
namespace Liv::Lck::UI {
class LckQualitySelector___c;
}
namespace Liv::Lck {
struct CameraTrackDescriptor;
}
namespace Liv::Lck {
class ILckService;
}
namespace Liv::Lck {
struct QualityOption;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T>
class Predicate_1;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
// Forward declare root types
namespace Liv::Lck::UI {
class LckQualitySelector;
}
namespace Liv::Lck::UI {
class LckQualitySelector___c;
}
// Write type traits
MARK_REF_T(::Liv::Lck::UI::LckQualitySelector*);
MARK_REF_T(::Liv::Lck::UI::LckQualitySelector___c*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::UI::LckQualitySelector*, "Liv.Lck.UI", "LckQualitySelector");
DEFINE_IL2CPP_CLASS(::Liv::Lck::UI::LckQualitySelector___c*, "Liv.Lck.UI", "LckQualitySelector/<>c");
// Dependencies Liv.Lck.QualityOption, UnityEngine.MonoBehaviour
namespace Liv::Lck::UI {
// Is value type: false
// CS Name: Liv.Lck.UI.LckQualitySelector
class CORDL_TYPE LckQualitySelector : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::Liv::Lck::UI::LckQualitySelector___c;

/// @brief Field OnQualityOptionChanged, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnQualityOptionChanged, put=__cordl_internal_set_OnQualityOptionChanged)) ::System::Action_1<::Liv::Lck::QualityOption>*  OnQualityOptionChanged;

/// @brief Field OnQualityOptionSelected, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnQualityOptionSelected, put=__cordl_internal_set_OnQualityOptionSelected)) ::System::Action_1<::Liv::Lck::CameraTrackDescriptor>*  OnQualityOptionSelected;

/// @brief Field _currentQualityIndex, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentQualityIndex, put=__cordl_internal_set__currentQualityIndex)) int32_t  _currentQualityIndex;

/// @brief Field _currentQualityOption, offset 0x28, size 0x38 
 __declspec(property(get=__cordl_internal_get__currentQualityOption, put=__cordl_internal_set__currentQualityOption)) ::Liv::Lck::QualityOption  _currentQualityOption;

/// @brief Field _lckService, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__lckService, put=__cordl_internal_set__lckService)) ::Liv::Lck::ILckService*  _lckService;

/// @brief Field _onQualityOptionChanged, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__onQualityOptionChanged, put=__cordl_internal_set__onQualityOptionChanged)) ::UnityEngine::Events::UnityEvent_1<::StringW>*  _onQualityOptionChanged;

/// @brief Field _onSetQualityButtonIsDisabledState, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__onSetQualityButtonIsDisabledState, put=__cordl_internal_set__onSetQualityButtonIsDisabledState)) ::UnityEngine::Events::UnityEvent_1<bool>*  _onSetQualityButtonIsDisabledState;

/// @brief Field _qualityOptions, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__qualityOptions, put=__cordl_internal_set__qualityOptions)) ::System::Collections::Generic::List_1<::Liv::Lck::QualityOption>*  _qualityOptions;

/// @brief Method GoToNextOption, addr 0x9d50e98, size 0x60, virtual false, abstract: false, final false
inline void GoToNextOption() ;

/// @brief Method InitializeOptions, addr 0x9d50c30, size 0x134, virtual false, abstract: false, final false
inline void InitializeOptions(::System::Collections::Generic::List_1<::Liv::Lck::QualityOption>*  qualityOptions) ;

static inline ::Liv::Lck::UI::LckQualitySelector* New_ctor() ;

/// @brief Method SetQualityButtonIsDisabledState, addr 0x9d50ef8, size 0x58, virtual false, abstract: false, final false
inline void SetQualityButtonIsDisabledState(bool  state) ;

/// @brief Method UpdateCurrentTrackDescriptor, addr 0x9d50d64, size 0x134, virtual false, abstract: false, final false
inline void UpdateCurrentTrackDescriptor(int32_t  index) ;

constexpr ::System::Action_1<::Liv::Lck::QualityOption>* const& __cordl_internal_get_OnQualityOptionChanged() const;

constexpr ::System::Action_1<::Liv::Lck::QualityOption>*& __cordl_internal_get_OnQualityOptionChanged() ;

constexpr ::System::Action_1<::Liv::Lck::CameraTrackDescriptor>* const& __cordl_internal_get_OnQualityOptionSelected() const;

constexpr ::System::Action_1<::Liv::Lck::CameraTrackDescriptor>*& __cordl_internal_get_OnQualityOptionSelected() ;

constexpr int32_t const& __cordl_internal_get__currentQualityIndex() const;

constexpr int32_t& __cordl_internal_get__currentQualityIndex() ;

constexpr ::Liv::Lck::QualityOption const& __cordl_internal_get__currentQualityOption() const;

constexpr ::Liv::Lck::QualityOption& __cordl_internal_get__currentQualityOption() ;

constexpr ::Liv::Lck::ILckService* const& __cordl_internal_get__lckService() const;

constexpr ::Liv::Lck::ILckService*& __cordl_internal_get__lckService() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::StringW>* const& __cordl_internal_get__onQualityOptionChanged() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::StringW>*& __cordl_internal_get__onQualityOptionChanged() ;

constexpr ::UnityEngine::Events::UnityEvent_1<bool>* const& __cordl_internal_get__onSetQualityButtonIsDisabledState() const;

constexpr ::UnityEngine::Events::UnityEvent_1<bool>*& __cordl_internal_get__onSetQualityButtonIsDisabledState() ;

constexpr ::System::Collections::Generic::List_1<::Liv::Lck::QualityOption>* const& __cordl_internal_get__qualityOptions() const;

constexpr ::System::Collections::Generic::List_1<::Liv::Lck::QualityOption>*& __cordl_internal_get__qualityOptions() ;

constexpr void __cordl_internal_set_OnQualityOptionChanged(::System::Action_1<::Liv::Lck::QualityOption>*  value) ;

constexpr void __cordl_internal_set_OnQualityOptionSelected(::System::Action_1<::Liv::Lck::CameraTrackDescriptor>*  value) ;

constexpr void __cordl_internal_set__currentQualityIndex(int32_t  value) ;

constexpr void __cordl_internal_set__currentQualityOption(::Liv::Lck::QualityOption  value) ;

constexpr void __cordl_internal_set__lckService(::Liv::Lck::ILckService*  value) ;

constexpr void __cordl_internal_set__onQualityOptionChanged(::UnityEngine::Events::UnityEvent_1<::StringW>*  value) ;

constexpr void __cordl_internal_set__onSetQualityButtonIsDisabledState(::UnityEngine::Events::UnityEvent_1<bool>*  value) ;

constexpr void __cordl_internal_set__qualityOptions(::System::Collections::Generic::List_1<::Liv::Lck::QualityOption>*  value) ;

/// @brief Method .ctor, addr 0x9d50f50, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckQualitySelector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckQualitySelector", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckQualitySelector(LckQualitySelector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckQualitySelector", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckQualitySelector(LckQualitySelector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24921};

/// [InjectLck]
/// @brief Field _lckService, offset: 0x20, size: 0x8, def value: None
 ::Liv::Lck::ILckService*  ____lckService;

/// @brief Field _currentQualityOption, offset: 0x28, size: 0x38, def value: None
 ::Liv::Lck::QualityOption  ____currentQualityOption;

/// @brief Field _currentQualityIndex, offset: 0x60, size: 0x4, def value: None
 int32_t  ____currentQualityIndex;

/// @brief Field _qualityOptions, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Liv::Lck::QualityOption>*  ____qualityOptions;

/// [Obsolete("Only provides recording parameters for the selected quality option, and does not affect  streaming - Use OnQualityOptionChanged instead")]
/// @brief Field OnQualityOptionSelected, offset: 0x70, size: 0x8, def value: None
 ::System::Action_1<::Liv::Lck::CameraTrackDescriptor>*  ___OnQualityOptionSelected;

/// @brief Field OnQualityOptionChanged, offset: 0x78, size: 0x8, def value: None
 ::System::Action_1<::Liv::Lck::QualityOption>*  ___OnQualityOptionChanged;

/// [SerializeField]
/// @brief Field _onQualityOptionChanged, offset: 0x80, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::StringW>*  ____onQualityOptionChanged;

/// [SerializeField]
/// @brief Field _onSetQualityButtonIsDisabledState, offset: 0x88, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<bool>*  ____onSetQualityButtonIsDisabledState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::UI::LckQualitySelector, ____lckService) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckQualitySelector, ____currentQualityOption) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckQualitySelector, ____currentQualityIndex) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckQualitySelector, ____qualityOptions) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckQualitySelector, ___OnQualityOptionSelected) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckQualitySelector, ___OnQualityOptionChanged) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckQualitySelector, ____onQualityOptionChanged) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckQualitySelector, ____onSetQualityButtonIsDisabledState) == 0x88, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::UI::LckQualitySelector) == 0x90, "Size mismatch!");

} // namespace end def Liv::Lck::UI
// [CompilerGenerated]
// Dependencies System.Object
namespace Liv::Lck::UI {
// Is value type: false
// CS Name: Liv.Lck.UI.LckQualitySelector/<>c
class CORDL_TYPE LckQualitySelector___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Liv::Lck::UI::LckQualitySelector___c*  __9;

/// @brief Field <>9__8_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__8_0, put=setStaticF___9__8_0)) ::System::Predicate_1<::Liv::Lck::QualityOption>*  __9__8_0;

static inline ::Liv::Lck::UI::LckQualitySelector___c* New_ctor() ;

/// @brief Method <InitializeOptions>b__8_0, addr 0x9d51048, size 0xc, virtual false, abstract: false, final false
inline bool _InitializeOptions_b__8_0(::Liv::Lck::QualityOption  x) ;

/// @brief Method .ctor, addr 0x9d51040, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Liv::Lck::UI::LckQualitySelector___c* getStaticF___9() ;

static inline ::System::Predicate_1<::Liv::Lck::QualityOption>* getStaticF___9__8_0() ;

static inline void setStaticF___9(::Liv::Lck::UI::LckQualitySelector___c*  value) ;

static inline void setStaticF___9__8_0(::System::Predicate_1<::Liv::Lck::QualityOption>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckQualitySelector___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckQualitySelector___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckQualitySelector___c(LckQualitySelector___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckQualitySelector___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckQualitySelector___c(LckQualitySelector___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24920};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::UI::LckQualitySelector___c) == 0x10, "Size mismatch!");

} // namespace end def Liv::Lck::UI
