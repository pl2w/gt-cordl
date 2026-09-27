#pragma once
// IWYU pragma private; include "System/ComponentModel/LicenseException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LicenseException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class LicenseException;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::LicenseException*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::LicenseException*, "System.ComponentModel", "LicenseException");
// Dependencies System.SystemException
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.LicenseException
class CORDL_TYPE LicenseException : public ::System::SystemException {
public:
// Declarations
 __declspec(property(get=get_LicensedType)) ::System::Type*  LicensedType;

/// @brief Field instance, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_instance, put=__cordl_internal_set_instance)) ::System::Object*  instance;

/// @brief Field type, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_type, put=__cordl_internal_set_type)) ::System::Type*  type;

/// @brief Method GetObjectData, addr 0xad736ec, size 0xf0, virtual true, abstract: false, final false
inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

static inline ::System::ComponentModel::LicenseException* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

static inline ::System::ComponentModel::LicenseException* New_ctor(::System::Type*  type) ;

static inline ::System::ComponentModel::LicenseException* New_ctor(::System::Type*  type, ::System::Object*  instance) ;

static inline ::System::ComponentModel::LicenseException* New_ctor(::System::Type*  type, ::System::Object*  instance, ::StringW  message) ;

static inline ::System::ComponentModel::LicenseException* New_ctor(::System::Type*  type, ::System::Object*  instance, ::StringW  message, ::System::Exception*  innerException) ;

constexpr ::System::Object* const& __cordl_internal_get_instance() const;

constexpr ::System::Object*& __cordl_internal_get_instance() ;

constexpr ::System::Type* const& __cordl_internal_get_type() const;

constexpr ::System::Type*& __cordl_internal_get_type() ;

constexpr void __cordl_internal_set_instance(::System::Object*  value) ;

constexpr void __cordl_internal_set_type(::System::Type*  value) ;

/// @brief Method .ctor, addr 0xad73578, size 0x16c, virtual false, abstract: false, final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor, addr 0xad7327c, size 0xf4, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  type) ;

/// @brief Method .ctor, addr 0xad733c8, size 0x154, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  type, ::System::Object*  instance) ;

/// @brief Method .ctor, addr 0xad73370, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  type, ::System::Object*  instance, ::StringW  message) ;

/// @brief Method .ctor, addr 0xad7351c, size 0x5c, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  type, ::System::Object*  instance, ::StringW  message, ::System::Exception*  innerException) ;

/// @brief Method get_LicensedType, addr 0xad736e4, size 0x8, virtual false, abstract: false, final false
inline ::System::Type* get_LicensedType() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LicenseException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LicenseException", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LicenseException(LicenseException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LicenseException", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LicenseException(LicenseException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10272};

/// @brief Field type, offset: 0x90, size: 0x8, def value: None
 ::System::Type*  ___type;

/// @brief Field instance, offset: 0x98, size: 0x8, def value: None
 ::System::Object*  ___instance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::LicenseException, ___type) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::LicenseException, ___instance) == 0x98, "Offset mismatch!");

static_assert(sizeof(::System::ComponentModel::LicenseException) == 0xa0, "Size mismatch!");

} // namespace end def System::ComponentModel
