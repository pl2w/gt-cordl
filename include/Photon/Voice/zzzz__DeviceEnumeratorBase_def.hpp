#pragma once
// IWYU pragma private; include "Photon/Voice/DeviceEnumeratorBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(DeviceEnumeratorBase)
namespace Photon::Voice {
struct DeviceInfo;
}
namespace Photon::Voice {
class IDeviceEnumerator;
}
namespace Photon::Voice {
class ILogger;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Photon::Voice {
class DeviceEnumeratorBase;
}
// Write type traits
MARK_REF_T(::Photon::Voice::DeviceEnumeratorBase*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::DeviceEnumeratorBase*, "Photon.Voice", "DeviceEnumeratorBase");
// Dependencies System.Object
namespace Photon::Voice {
// Is value type: false
// CS Name: Photon.Voice.DeviceEnumeratorBase
class CORDL_TYPE DeviceEnumeratorBase : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Error, put=set_Error)) ::StringW  Error;

 __declspec(property(get=get_IsSupported)) bool  IsSupported;

/// @brief Field <Error>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Error_k__BackingField, put=__cordl_internal_set__Error_k__BackingField)) ::StringW  _Error_k__BackingField;

/// @brief Field devices, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_devices, put=__cordl_internal_set_devices)) ::System::Collections::Generic::List_1<::Photon::Voice::DeviceInfo>*  devices;

/// @brief Field logger, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_logger, put=__cordl_internal_set_logger)) ::Photon::Voice::ILogger*  logger;

/// @brief Convert operator to "::Photon::Voice::IDeviceEnumerator"
constexpr operator  ::Photon::Voice::IDeviceEnumerator*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Photon::Voice::DeviceInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Photon::Voice::DeviceInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Dispose() ;

/// @brief Method GetEnumerator, addr 0xa746258, size 0x90, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Photon::Voice::DeviceInfo>* GetEnumerator() ;

static inline ::Photon::Voice::DeviceEnumeratorBase* New_ctor(::Photon::Voice::ILogger*  logger) ;

/// @brief Method Refresh, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Refresh() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xa7462e8, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

constexpr ::StringW const& __cordl_internal_get__Error_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Error_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::Photon::Voice::DeviceInfo>* const& __cordl_internal_get_devices() const;

constexpr ::System::Collections::Generic::List_1<::Photon::Voice::DeviceInfo>*& __cordl_internal_get_devices() ;

constexpr ::Photon::Voice::ILogger* const& __cordl_internal_get_logger() const;

constexpr ::Photon::Voice::ILogger*& __cordl_internal_get_logger() ;

constexpr void __cordl_internal_set__Error_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set_devices(::System::Collections::Generic::List_1<::Photon::Voice::DeviceInfo>*  value) ;

constexpr void __cordl_internal_set_logger(::Photon::Voice::ILogger*  value) ;

/// @brief Method .ctor, addr 0xa7461a4, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::Photon::Voice::ILogger*  logger) ;

/// [CompilerGenerated]
/// @brief Method get_Error, addr 0xa746248, size 0x8, virtual true, abstract: false, final false
inline ::StringW get_Error() ;

/// @brief Method get_IsSupported, addr 0xa746240, size 0x8, virtual true, abstract: false, final false
inline bool get_IsSupported() ;

/// @brief Convert to "::Photon::Voice::IDeviceEnumerator"
constexpr ::Photon::Voice::IDeviceEnumerator* i___Photon__Voice__IDeviceEnumerator() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Photon::Voice::DeviceInfo>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Photon::Voice::DeviceInfo>* i___System__Collections__Generic__IEnumerable_1___Photon__Voice__DeviceInfo_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// [CompilerGenerated]
/// @brief Method set_Error, addr 0xa746250, size 0x8, virtual true, abstract: false, final false
inline void set_Error(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DeviceEnumeratorBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DeviceEnumeratorBase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DeviceEnumeratorBase(DeviceEnumeratorBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DeviceEnumeratorBase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DeviceEnumeratorBase(DeviceEnumeratorBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28403};

/// @brief Field devices, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Photon::Voice::DeviceInfo>*  ___devices;

/// @brief Field logger, offset: 0x18, size: 0x8, def value: None
 ::Photon::Voice::ILogger*  ___logger;

/// [CompilerGenerated]
/// @brief Field <Error>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____Error_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::DeviceEnumeratorBase, ___devices) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::DeviceEnumeratorBase, ___logger) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::DeviceEnumeratorBase, ____Error_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::DeviceEnumeratorBase) == 0x28, "Size mismatch!");

} // namespace end def Photon::Voice
