#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/HandSourceInjector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(HandSourceInjector)
namespace Oculus::Interaction::Input {
class HandDataAsset;
}
namespace Oculus::Interaction::Input {
class HandSourceInjector_ActiveDataSource;
}
namespace Oculus::Interaction::Input {
class Hand;
}
namespace Oculus::Interaction::Input {
template<typename TData>
class IDataSource_1;
}
namespace Oculus::Interaction::Input {
class IDataSource;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction::Input {
class HandSourceInjector;
}
namespace Oculus::Interaction::Input {
class HandSourceInjector_ActiveDataSource;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::HandSourceInjector*);
MARK_REF_T(::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::HandSourceInjector*, "Oculus.Interaction.Input", "HandSourceInjector");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource*, "Oculus.Interaction.Input", "HandSourceInjector/ActiveDataSource");
// Dependencies Oculus.Interaction.Input.HandSourceInjector::ActiveDataSource, UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.HandSourceInjector
class CORDL_TYPE HandSourceInjector : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ActiveDataSource = ::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource;

/// @brief Field _activeDataSource, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__activeDataSource, put=__cordl_internal_set__activeDataSource)) ::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource*  _activeDataSource;

/// @brief Field _sources, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__sources, put=__cordl_internal_set__sources)) ::ArrayW<::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource*>  _sources;

/// @brief Field _started, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _targetHand, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__targetHand, put=__cordl_internal_set__targetHand)) ::UnityW<::Oculus::Interaction::Input::Hand>  _targetHand;

/// @brief Method ApplySource, addr 0xa51259c, size 0x80, virtual false, abstract: false, final false
inline void ApplySource(::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource*  activeDataSource) ;

static inline ::Oculus::Interaction::Input::HandSourceInjector* New_ctor() ;

/// @brief Method Start, addr 0xa5123bc, size 0xb0, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0xa51261c, size 0x30, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateActiveSource, addr 0xa512514, size 0x88, virtual false, abstract: false, final false
inline void UpdateActiveSource() ;

constexpr ::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource* const& __cordl_internal_get__activeDataSource() const;

constexpr ::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource*& __cordl_internal_get__activeDataSource() ;

constexpr ::ArrayW<::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource*> const& __cordl_internal_get__sources() const;

constexpr ::ArrayW<::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource*>& __cordl_internal_get__sources() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr ::UnityW<::Oculus::Interaction::Input::Hand> const& __cordl_internal_get__targetHand() const;

constexpr ::UnityW<::Oculus::Interaction::Input::Hand>& __cordl_internal_get__targetHand() ;

constexpr void __cordl_internal_set__activeDataSource(::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource*  value) ;

constexpr void __cordl_internal_set__sources(::ArrayW<::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource*>  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__targetHand(::UnityW<::Oculus::Interaction::Input::Hand>  value) ;

/// @brief Method .ctor, addr 0xa5126f8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandSourceInjector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandSourceInjector", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandSourceInjector(HandSourceInjector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandSourceInjector", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandSourceInjector(HandSourceInjector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16499};

/// [SerializeField]
/// @brief Field _targetHand, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::Input::Hand>  ____targetHand;

/// [SerializeField]
/// @brief Field _sources, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource*>  ____sources;

/// @brief Field _activeDataSource, offset: 0x30, size: 0x8, def value: None
 ::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource*  ____activeDataSource;

/// @brief Field _started, offset: 0x38, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::HandSourceInjector, ____targetHand) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::HandSourceInjector, ____sources) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::HandSourceInjector, ____activeDataSource) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::HandSourceInjector, ____started) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::HandSourceInjector) == 0x40, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input
// Dependencies System.Object
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.HandSourceInjector/ActiveDataSource
class CORDL_TYPE HandSourceInjector_ActiveDataSource : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_ModifyAfter, put=set_ModifyAfter)) ::Oculus::Interaction::Input::IDataSource*  ModifyAfter;

 __declspec(property(get=get_Source, put=set_Source)) ::Oculus::Interaction::Input::IDataSource_1<::Oculus::Interaction::Input::HandDataAsset*>*  Source;

/// @brief Field <ModifyAfter>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__ModifyAfter_k__BackingField, put=__cordl_internal_set__ModifyAfter_k__BackingField)) ::Oculus::Interaction::Input::IDataSource*  _ModifyAfter_k__BackingField;

/// @brief Field <Source>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Source_k__BackingField, put=__cordl_internal_set__Source_k__BackingField)) ::Oculus::Interaction::Input::IDataSource_1<::Oculus::Interaction::Input::HandDataAsset*>*  _Source_k__BackingField;

/// @brief Field _modifyAfter, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__modifyAfter, put=__cordl_internal_set__modifyAfter)) ::UnityW<::UnityEngine::Object>  _modifyAfter;

/// @brief Field _source, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__source, put=__cordl_internal_set__source)) ::UnityW<::UnityEngine::Object>  _source;

/// @brief Method Initialize, addr 0xa51246c, size 0xa8, virtual false, abstract: false, final false
inline void Initialize() ;

/// @brief Method IsActive, addr 0xa51264c, size 0xac, virtual false, abstract: false, final false
inline bool IsActive() ;

static inline ::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource* New_ctor() ;

/// [CompilerGenerated]
/// @brief Method <Initialize>g__AssertField|10_0, addr 0xa512720, size 0x4, virtual false, abstract: false, final false
static inline void _Initialize_g__AssertField_10_0(::System::Object*  obj, ::StringW  name) ;

constexpr ::Oculus::Interaction::Input::IDataSource* const& __cordl_internal_get__ModifyAfter_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::IDataSource*& __cordl_internal_get__ModifyAfter_k__BackingField() ;

constexpr ::Oculus::Interaction::Input::IDataSource_1<::Oculus::Interaction::Input::HandDataAsset*>* const& __cordl_internal_get__Source_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::IDataSource_1<::Oculus::Interaction::Input::HandDataAsset*>*& __cordl_internal_get__Source_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__modifyAfter() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__modifyAfter() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__source() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__source() ;

constexpr void __cordl_internal_set__ModifyAfter_k__BackingField(::Oculus::Interaction::Input::IDataSource*  value) ;

constexpr void __cordl_internal_set__Source_k__BackingField(::Oculus::Interaction::Input::IDataSource_1<::Oculus::Interaction::Input::HandDataAsset*>*  value) ;

constexpr void __cordl_internal_set__modifyAfter(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__source(::UnityW<::UnityEngine::Object>  value) ;

/// @brief Method .ctor, addr 0xa512724, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_ModifyAfter, addr 0xa512710, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::IDataSource* get_ModifyAfter() ;

/// [CompilerGenerated]
/// @brief Method get_Source, addr 0xa512700, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::IDataSource_1<::Oculus::Interaction::Input::HandDataAsset*>* get_Source() ;

/// [CompilerGenerated]
/// @brief Method set_ModifyAfter, addr 0xa512718, size 0x8, virtual false, abstract: false, final false
inline void set_ModifyAfter(::Oculus::Interaction::Input::IDataSource*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Source, addr 0xa512708, size 0x8, virtual false, abstract: false, final false
inline void set_Source(::Oculus::Interaction::Input::IDataSource_1<::Oculus::Interaction::Input::HandDataAsset*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandSourceInjector_ActiveDataSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandSourceInjector_ActiveDataSource", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandSourceInjector_ActiveDataSource(HandSourceInjector_ActiveDataSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandSourceInjector_ActiveDataSource", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandSourceInjector_ActiveDataSource(HandSourceInjector_ActiveDataSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16498};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IDataSource`1<TData>), new[] {  })]
/// @brief Field _source, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____source;

/// [CompilerGenerated]
/// @brief Field <Source>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IDataSource_1<::Oculus::Interaction::Input::HandDataAsset*>*  ____Source_k__BackingField;

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IDataSource), new[] {  })]
/// @brief Field _modifyAfter, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____modifyAfter;

/// [CompilerGenerated]
/// @brief Field <ModifyAfter>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IDataSource*  ____ModifyAfter_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource, ____source) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource, ____Source_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource, ____modifyAfter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource, ____ModifyAfter_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::HandSourceInjector_ActiveDataSource) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input
