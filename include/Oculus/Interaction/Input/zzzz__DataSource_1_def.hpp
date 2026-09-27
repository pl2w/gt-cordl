#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/DataSource_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__DataSource`1_UpdateModeFlags_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DataSource_1)
namespace GlobalNamespace {
template<typename TData>
struct DataSource_1_UpdateModeFlags;
}
namespace Oculus::Interaction::Input {
template<typename TData>
class DataSource_1___c;
}
namespace Oculus::Interaction::Input {
template<typename TData>
class IDataSource_1;
}
namespace Oculus::Interaction::Input {
class IDataSource;
}
namespace System {
class Action;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction::Input {
template<typename TData>
class DataSource_1;
}
namespace Oculus::Interaction::Input {
template<typename TData>
class DataSource_1___c;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Oculus::Interaction::Input::DataSource_1);
MARK_GEN_REF_T_PTR(::Oculus::Interaction::Input::DataSource_1___c);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Oculus::Interaction::Input::DataSource_1, "Oculus.Interaction.Input", "DataSource`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Oculus::Interaction::Input::DataSource_1___c, "Oculus.Interaction.Input", "DataSource`1/<>c");
// Dependencies Oculus.Interaction.Input.DataSource`1::UpdateModeFlags<TData>, UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Input {
// cpp template
template<typename TData>
// Is value type: false
// CS Name: Oculus.Interaction.Input.DataSource`1<TData>
class CORDL_TYPE DataSource_1 : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using UpdateModeFlags = ::GlobalNamespace::DataSource_1_UpdateModeFlags<TData>;

using __c = ::Oculus::Interaction::Input::DataSource_1___c<TData>;

 __declspec(property(get=get_CurrentDataVersion)) int32_t  CurrentDataVersion;

 __declspec(property(get=get_DataAsset)) TData  DataAsset;

/// @brief Field InputDataAvailable, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_InputDataAvailable, put=__cordl_internal_set_InputDataAvailable)) ::System::Action*  InputDataAvailable;

 __declspec(property(get=get_Started)) bool  Started;

/// @brief Field UpdateAfter, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_UpdateAfter, put=__cordl_internal_set_UpdateAfter)) ::Oculus::Interaction::Input::IDataSource*  UpdateAfter;

 __declspec(property(get=get_UpdateMode)) ::GlobalNamespace::DataSource_1_UpdateModeFlags<TData>  UpdateMode;

 __declspec(property(get=get_UpdateModeAfterPrevious)) bool  UpdateModeAfterPrevious;

/// @brief Field _currentDataVersion, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentDataVersion, put=__cordl_internal_set__currentDataVersion)) int32_t  _currentDataVersion;

/// @brief Field _requiresUpdate, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get__requiresUpdate, put=__cordl_internal_set__requiresUpdate)) bool  _requiresUpdate;

/// @brief Field _started, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _updateAfter, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__updateAfter, put=__cordl_internal_set__updateAfter)) ::UnityW<::UnityEngine::Object>  _updateAfter;

/// @brief Field _updateMode, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__updateMode, put=__cordl_internal_set__updateMode)) ::GlobalNamespace::DataSource_1_UpdateModeFlags<TData>  _updateMode;

/// @brief Convert operator to "::Oculus::Interaction::Input::IDataSource"
constexpr operator  ::Oculus::Interaction::Input::IDataSource*() noexcept;

/// @brief Convert operator to "::Oculus::Interaction::Input::IDataSource_1<TData>"
constexpr operator  ::Oculus::Interaction::Input::IDataSource_1<TData>*() noexcept;

/// @brief Method FixedUpdate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method GetData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline TData GetData() ;

/// @brief Method InjectAllDataSource, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void InjectAllDataSource(::GlobalNamespace::DataSource_1_UpdateModeFlags<TData>  updateMode, ::Oculus::Interaction::Input::IDataSource*  updateAfter) ;

/// @brief Method InjectUpdateAfter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void InjectUpdateAfter(::Oculus::Interaction::Input::IDataSource*  updateAfter) ;

/// @brief Method InjectUpdateMode, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void InjectUpdateMode(::GlobalNamespace::DataSource_1_UpdateModeFlags<TData>  updateMode) ;

/// @brief Method LateUpdate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void LateUpdate() ;

/// @brief Method MarkInputDataRequiresUpdate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void MarkInputDataRequiresUpdate() ;

static inline ::Oculus::Interaction::Input::DataSource_1<TData>* New_ctor() ;

/// @brief Method OnDisable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RequiresUpdate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool RequiresUpdate() ;

/// @brief Method ResetUpdateAfter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ResetUpdateAfter(::Oculus::Interaction::Input::IDataSource*  updateAfter, ::GlobalNamespace::DataSource_1_UpdateModeFlags<TData>  updateMode) ;

/// @brief Method Start, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void UpdateData() ;

constexpr ::System::Action* const& __cordl_internal_get_InputDataAvailable() const;

constexpr ::System::Action*& __cordl_internal_get_InputDataAvailable() ;

constexpr ::Oculus::Interaction::Input::IDataSource* const& __cordl_internal_get_UpdateAfter() const;

constexpr ::Oculus::Interaction::Input::IDataSource*& __cordl_internal_get_UpdateAfter() ;

constexpr int32_t const& __cordl_internal_get__currentDataVersion() const;

constexpr int32_t& __cordl_internal_get__currentDataVersion() ;

constexpr bool const& __cordl_internal_get__requiresUpdate() const;

constexpr bool& __cordl_internal_get__requiresUpdate() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__updateAfter() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__updateAfter() ;

constexpr ::GlobalNamespace::DataSource_1_UpdateModeFlags<TData> const& __cordl_internal_get__updateMode() const;

constexpr ::GlobalNamespace::DataSource_1_UpdateModeFlags<TData>& __cordl_internal_get__updateMode() ;

constexpr void __cordl_internal_set_InputDataAvailable(::System::Action*  value) ;

constexpr void __cordl_internal_set_UpdateAfter(::Oculus::Interaction::Input::IDataSource*  value) ;

constexpr void __cordl_internal_set__currentDataVersion(int32_t  value) ;

constexpr void __cordl_internal_set__requiresUpdate(bool  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__updateAfter(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__updateMode(::GlobalNamespace::DataSource_1_UpdateModeFlags<TData>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_InputDataAvailable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void add_InputDataAvailable(::System::Action*  value) ;

/// @brief Method get_CurrentDataVersion, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_CurrentDataVersion() ;

/// @brief Method get_DataAsset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline TData get_DataAsset() ;

/// @brief Method get_Started, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_Started() ;

/// @brief Method get_UpdateMode, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::GlobalNamespace::DataSource_1_UpdateModeFlags<TData> get_UpdateMode() ;

/// @brief Method get_UpdateModeAfterPrevious, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_UpdateModeAfterPrevious() ;

/// @brief Convert to "::Oculus::Interaction::Input::IDataSource"
constexpr ::Oculus::Interaction::Input::IDataSource* i___Oculus__Interaction__Input__IDataSource() noexcept;

/// @brief Convert to "::Oculus::Interaction::Input::IDataSource_1<TData>"
constexpr ::Oculus::Interaction::Input::IDataSource_1<TData>* i___Oculus__Interaction__Input__IDataSource_1_TData_() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_InputDataAvailable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void remove_InputDataAvailable(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DataSource_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DataSource_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DataSource_1(DataSource_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DataSource_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DataSource_1(DataSource_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16470};

/// @brief Field _started, offset: 0x20, size: 0x1, def value: None
 bool  ____started;

/// @brief Field _requiresUpdate, offset: 0x21, size: 0x1, def value: None
 bool  ____requiresUpdate;

/// [Header("Update")]
/// [SerializeField]
/// @brief Field _updateMode, offset: 0x24, size: 0x4, def value: None
 ::GlobalNamespace::DataSource_1_UpdateModeFlags<TData>  ____updateMode;

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IDataSource), new[] {  })]
/// [Optional((Oculus.Interaction.OptionalAttribute::Flag)2)]
/// @brief Field _updateAfter, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____updateAfter;

/// @brief Field UpdateAfter, offset: 0x30, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IDataSource*  ___UpdateAfter;

/// @brief Field _currentDataVersion, offset: 0x38, size: 0x4, def value: None
 int32_t  ____currentDataVersion;

/// [CompilerGenerated]
/// @brief Field InputDataAvailable, offset: 0x40, size: 0x8, def value: None
 ::System::Action*  ___InputDataAvailable;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction::Input
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::Input {
// cpp template
template<typename TData>
// Is value type: false
// CS Name: Oculus.Interaction.Input.DataSource`1/<>c<TData>
class CORDL_TYPE DataSource_1___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::Input::DataSource_1___c<TData>*  __9;

/// @brief Field <>9__34_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__34_0, put=setStaticF___9__34_0)) ::System::Action*  __9__34_0;

static inline ::Oculus::Interaction::Input::DataSource_1___c<TData>* New_ctor() ;

/// @brief Method <.ctor>b__34_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__34_0() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::Input::DataSource_1___c<TData>* getStaticF___9() ;

static inline ::System::Action* getStaticF___9__34_0() ;

static inline void setStaticF___9(::Oculus::Interaction::Input::DataSource_1___c<TData>*  value) ;

static inline void setStaticF___9__34_0(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DataSource_1___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DataSource_1___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DataSource_1___c(DataSource_1___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DataSource_1___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DataSource_1___c(DataSource_1___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16469};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction::Input
