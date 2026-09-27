#pragma once
// IWYU pragma private; include "Oculus/Interaction/UpdateDriverAfterDataSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(UpdateDriverAfterDataSource)
namespace Oculus::Interaction::Input {
class IDataSource;
}
namespace Oculus::Interaction {
class IUpdateDriver;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction {
class UpdateDriverAfterDataSource;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::UpdateDriverAfterDataSource*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::UpdateDriverAfterDataSource*, "Oculus.Interaction", "UpdateDriverAfterDataSource");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.UpdateDriverAfterDataSource
class CORDL_TYPE UpdateDriverAfterDataSource : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field DataSource, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_DataSource, put=__cordl_internal_set_DataSource)) ::Oculus::Interaction::Input::IDataSource*  DataSource;

 __declspec(property(get=get_IsRootDriver, put=set_IsRootDriver)) bool  IsRootDriver;

/// @brief Field UpdateDriver, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_UpdateDriver, put=__cordl_internal_set_UpdateDriver)) ::Oculus::Interaction::IUpdateDriver*  UpdateDriver;

/// @brief Field <IsRootDriver>k__BackingField, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsRootDriver_k__BackingField, put=__cordl_internal_set__IsRootDriver_k__BackingField)) bool  _IsRootDriver_k__BackingField;

/// @brief Field _dataSource, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__dataSource, put=__cordl_internal_set__dataSource)) ::UnityW<::UnityEngine::Object>  _dataSource;

/// @brief Field _started, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _updateDriver, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__updateDriver, put=__cordl_internal_set__updateDriver)) ::UnityW<::UnityEngine::Object>  _updateDriver;

/// @brief Convert operator to "::Oculus::Interaction::IUpdateDriver"
constexpr operator  ::Oculus::Interaction::IUpdateDriver*() noexcept;

/// @brief Method Awake, addr 0xa444234, size 0xb4, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method Drive, addr 0xa4445fc, size 0xa4, virtual true, abstract: false, final true
inline void Drive() ;

/// @brief Method InjectAllUpdateDriverAfterDataSource, addr 0xa4446a0, size 0x28, virtual false, abstract: false, final false
inline void InjectAllUpdateDriverAfterDataSource(::Oculus::Interaction::IUpdateDriver*  updateDriver, ::Oculus::Interaction::Input::IDataSource*  dataSource) ;

/// @brief Method InjectDataSource, addr 0xa444794, size 0xcc, virtual false, abstract: false, final false
inline void InjectDataSource(::Oculus::Interaction::Input::IDataSource*  dataSource) ;

/// @brief Method InjectUpdateDriver, addr 0xa4446c8, size 0xcc, virtual false, abstract: false, final false
inline void InjectUpdateDriver(::Oculus::Interaction::IUpdateDriver*  updateDriver) ;

static inline ::Oculus::Interaction::UpdateDriverAfterDataSource* New_ctor() ;

/// @brief Method OnDisable, addr 0xa444480, size 0x16c, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa444314, size 0x16c, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa4442e8, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::Oculus::Interaction::Input::IDataSource* const& __cordl_internal_get_DataSource() const;

constexpr ::Oculus::Interaction::Input::IDataSource*& __cordl_internal_get_DataSource() ;

constexpr ::Oculus::Interaction::IUpdateDriver* const& __cordl_internal_get_UpdateDriver() const;

constexpr ::Oculus::Interaction::IUpdateDriver*& __cordl_internal_get_UpdateDriver() ;

constexpr bool const& __cordl_internal_get__IsRootDriver_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsRootDriver_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__dataSource() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__dataSource() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__updateDriver() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__updateDriver() ;

constexpr void __cordl_internal_set_DataSource(::Oculus::Interaction::Input::IDataSource*  value) ;

constexpr void __cordl_internal_set_UpdateDriver(::Oculus::Interaction::IUpdateDriver*  value) ;

constexpr void __cordl_internal_set__IsRootDriver_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__dataSource(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__updateDriver(::UnityW<::UnityEngine::Object>  value) ;

/// @brief Method .ctor, addr 0xa444860, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_IsRootDriver, addr 0xa4445ec, size 0x8, virtual true, abstract: false, final true
inline bool get_IsRootDriver() ;

/// @brief Convert to "::Oculus::Interaction::IUpdateDriver"
constexpr ::Oculus::Interaction::IUpdateDriver* i___Oculus__Interaction__IUpdateDriver() noexcept;

/// [CompilerGenerated]
/// @brief Method set_IsRootDriver, addr 0xa4445f4, size 0x8, virtual true, abstract: false, final true
inline void set_IsRootDriver(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UpdateDriverAfterDataSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UpdateDriverAfterDataSource", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UpdateDriverAfterDataSource(UpdateDriverAfterDataSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UpdateDriverAfterDataSource", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UpdateDriverAfterDataSource(UpdateDriverAfterDataSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15805};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.IUpdateDriver), new[] {  })]
/// @brief Field _updateDriver, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____updateDriver;

/// @brief Field UpdateDriver, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::IUpdateDriver*  ___UpdateDriver;

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IDataSource), new[] {  })]
/// @brief Field _dataSource, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____dataSource;

/// @brief Field DataSource, offset: 0x38, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IDataSource*  ___DataSource;

/// @brief Field _started, offset: 0x40, size: 0x1, def value: None
 bool  ____started;

/// [CompilerGenerated]
/// @brief Field <IsRootDriver>k__BackingField, offset: 0x41, size: 0x1, def value: None
 bool  ____IsRootDriver_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::UpdateDriverAfterDataSource, ____updateDriver) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UpdateDriverAfterDataSource, ___UpdateDriver) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UpdateDriverAfterDataSource, ____dataSource) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UpdateDriverAfterDataSource, ___DataSource) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UpdateDriverAfterDataSource, ____started) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UpdateDriverAfterDataSource, ____IsRootDriver_k__BackingField) == 0x41, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::UpdateDriverAfterDataSource) == 0x48, "Size mismatch!");

} // namespace end def Oculus::Interaction
