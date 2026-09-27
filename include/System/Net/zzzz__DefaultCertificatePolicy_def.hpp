#pragma once
// IWYU pragma private; include "System/Net/DefaultCertificatePolicy.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultCertificatePolicy)
namespace System::Net {
class ICertificatePolicy;
}
namespace System::Net {
class ServicePoint;
}
namespace System::Net {
class WebRequest;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
// Forward declare root types
namespace System::Net {
class DefaultCertificatePolicy;
}
// Write type traits
MARK_REF_T(::System::Net::DefaultCertificatePolicy*);
DEFINE_IL2CPP_CLASS(::System::Net::DefaultCertificatePolicy*, "System.Net", "DefaultCertificatePolicy");
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.DefaultCertificatePolicy
class CORDL_TYPE DefaultCertificatePolicy : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::System::Net::ICertificatePolicy"
constexpr operator  ::System::Net::ICertificatePolicy*() noexcept;

/// @brief Method CheckValidationResult, addr 0xac8cf8c, size 0x78, virtual true, abstract: false, final true
inline bool CheckValidationResult(::System::Net::ServicePoint*  point, ::System::Security::Cryptography::X509Certificates::X509Certificate*  certificate, ::System::Net::WebRequest*  request, int32_t  certificateProblem) ;

static inline ::System::Net::DefaultCertificatePolicy* New_ctor() ;

/// @brief Method .ctor, addr 0xac8d004, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Net::ICertificatePolicy"
constexpr ::System::Net::ICertificatePolicy* i___System__Net__ICertificatePolicy() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DefaultCertificatePolicy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DefaultCertificatePolicy", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DefaultCertificatePolicy(DefaultCertificatePolicy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DefaultCertificatePolicy", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DefaultCertificatePolicy(DefaultCertificatePolicy const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10661};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::DefaultCertificatePolicy) == 0x10, "Size mismatch!");

} // namespace end def System::Net
