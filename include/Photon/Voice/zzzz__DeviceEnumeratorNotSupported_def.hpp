#pragma once
// IWYU pragma private; include "Photon/Voice/DeviceEnumeratorNotSupported.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Voice/zzzz__DeviceEnumeratorBase_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(DeviceEnumeratorNotSupported)
namespace Photon::Voice {
class ILogger;
}
// Forward declare root types
namespace Photon::Voice {
class DeviceEnumeratorNotSupported;
}
// Write type traits
MARK_REF_T(::Photon::Voice::DeviceEnumeratorNotSupported*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::DeviceEnumeratorNotSupported*, "Photon.Voice", "DeviceEnumeratorNotSupported");
// Dependencies Photon.Voice.DeviceEnumeratorBase
namespace Photon::Voice {
// Is value type: false
// CS Name: Photon.Voice.DeviceEnumeratorNotSupported
class CORDL_TYPE DeviceEnumeratorNotSupported : public ::Photon::Voice::DeviceEnumeratorBase {
public:
// Declarations
 __declspec(property(get=get_Error)) ::StringW  Error;

 __declspec(property(get=get_IsSupported)) bool  IsSupported;

/// @brief Field message, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_message, put=__cordl_internal_set_message)) ::StringW  message;

/// @brief Method Dispose, addr 0xa74632c, size 0x4, virtual true, abstract: false, final false
inline void Dispose() ;

static inline ::Photon::Voice::DeviceEnumeratorNotSupported* New_ctor(::Photon::Voice::ILogger*  logger, ::StringW  message) ;

/// @brief Method Refresh, addr 0xa746320, size 0x4, virtual true, abstract: false, final false
inline void Refresh() ;

constexpr ::StringW const& __cordl_internal_get_message() const;

constexpr ::StringW& __cordl_internal_get_message() ;

constexpr void __cordl_internal_set_message(::StringW  value) ;

/// @brief Method .ctor, addr 0xa7462f4, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::Photon::Voice::ILogger*  logger, ::StringW  message) ;

/// @brief Method get_Error, addr 0xa746324, size 0x8, virtual true, abstract: false, final false
inline ::StringW get_Error() ;

/// @brief Method get_IsSupported, addr 0xa7462ec, size 0x8, virtual true, abstract: false, final false
inline bool get_IsSupported() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DeviceEnumeratorNotSupported() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DeviceEnumeratorNotSupported", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DeviceEnumeratorNotSupported(DeviceEnumeratorNotSupported && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DeviceEnumeratorNotSupported", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DeviceEnumeratorNotSupported(DeviceEnumeratorNotSupported const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28404};

/// @brief Field message, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___message;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::DeviceEnumeratorNotSupported, ___message) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::DeviceEnumeratorNotSupported) == 0x30, "Size mismatch!");

} // namespace end def Photon::Voice
