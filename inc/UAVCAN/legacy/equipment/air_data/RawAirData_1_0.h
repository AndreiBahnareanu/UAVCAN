// This is an AUTO-GENERATED UAVCAN DSDL data type implementation. Curious? See https://uavcan.org.
// You shouldn't attempt to edit this file.
//
// Checking this file under version control is not recommended unless it is used as part of a high-SIL
// safety-critical codebase. The typical usage scenario is to generate it as part of the build process.
//
// To avoid conflicts with definitions given in the source DSDL file, all entities created by the code generator
// are named with an underscore at the end, like foo_bar_().
//
// Generator:     nunavut-1.0.3 (serialization was enabled)
// Source file:   /home/andrei/UAVCAN/public_regulated_data_types/legacy/equipment/air_data/RawAirData.1.0.uavcan
// Generated at:  2021-03-29 14:11:47.751011 UTC
// Is deprecated: no
// Fixed port-ID: None
// Full name:     legacy.equipment.air_data.RawAirData
// Version:       1.0
//
// Language Options
//     target_endianness:  little
//     omit_float_serialization_support:  False
//     enable_serialization_asserts:  False
//     enable_override_variable_array_capacity:  False

#ifndef LEGACY_EQUIPMENT_AIR_DATA_RAW_AIR_DATA_1_0_INCLUDED_
#define LEGACY_EQUIPMENT_AIR_DATA_RAW_AIR_DATA_1_0_INCLUDED_

#include <nunavut/support/serialization.h>
#include <stdint.h>
#include <stdlib.h>

static_assert( NUNAVUT_SUPPORT_LANGUAGE_OPTION_TARGET_ENDIANNESS == 434322821,
              "/home/andrei/UAVCAN/public_regulated_data_types/legacy/equipment/air_data/RawAirData.1.0.uavcan is trying to use a serialization library that was compiled with "
              "different language options. This is dangerous and therefore not allowed." );
static_assert( NUNAVUT_SUPPORT_LANGUAGE_OPTION_OMIT_FLOAT_SERIALIZATION_SUPPORT == 0,
              "/home/andrei/UAVCAN/public_regulated_data_types/legacy/equipment/air_data/RawAirData.1.0.uavcan is trying to use a serialization library that was compiled with "
              "different language options. This is dangerous and therefore not allowed." );
static_assert( NUNAVUT_SUPPORT_LANGUAGE_OPTION_ENABLE_SERIALIZATION_ASSERTS == 0,
              "/home/andrei/UAVCAN/public_regulated_data_types/legacy/equipment/air_data/RawAirData.1.0.uavcan is trying to use a serialization library that was compiled with "
              "different language options. This is dangerous and therefore not allowed." );
static_assert( NUNAVUT_SUPPORT_LANGUAGE_OPTION_ENABLE_OVERRIDE_VARIABLE_ARRAY_CAPACITY == 0,
              "/home/andrei/UAVCAN/public_regulated_data_types/legacy/equipment/air_data/RawAirData.1.0.uavcan is trying to use a serialization library that was compiled with "
              "different language options. This is dangerous and therefore not allowed." );

#ifdef __cplusplus
extern "C" {
#endif

/// This type does not have a fixed port-ID. See https://forum.uavcan.org/t/choosing-message-and-service-ids/889
#define legacy_equipment_air_data_RawAirData_1_0_HAS_FIXED_PORT_ID_ false

#define legacy_equipment_air_data_RawAirData_1_0_FULL_NAME_             "legacy.equipment.air_data.RawAirData"
#define legacy_equipment_air_data_RawAirData_1_0_FULL_NAME_AND_VERSION_ "legacy.equipment.air_data.RawAirData.1.0"

/// Extent is the minimum amount of memory required to hold any serialized representation of any compatible
/// version of the data type; or, on other words, it is the the maximum possible size of received objects of this type.
/// The size is specified in bytes (rather than bits) because by definition, extent is an integer number of bytes long.
/// When allocating a deserialization (RX) buffer for this data type, it should be at least extent bytes large.
/// When allocating a serialization (TX) buffer, it is safe to use the size of the largest serialized representation
/// instead of the extent because it provides a tighter bound of the object size; it is safe because the concrete type
/// is always known during serialization (unlike deserialization). If not sure, use extent everywhere.
#define legacy_equipment_air_data_RawAirData_1_0_EXTENT_BYTES_                    100UL
#define legacy_equipment_air_data_RawAirData_1_0_SERIALIZATION_BUFFER_SIZE_BYTES_ 50UL
static_assert(legacy_equipment_air_data_RawAirData_1_0_EXTENT_BYTES_ >= legacy_equipment_air_data_RawAirData_1_0_SERIALIZATION_BUFFER_SIZE_BYTES_,
              "Internal constraint violation");

/// saturated uint8 FLAG_HEATER_AVAILABLE = 1
#define legacy_equipment_air_data_RawAirData_1_0_FLAG_HEATER_AVAILABLE (1U)
/// saturated uint8 FLAG_HEATER_WORKING = 2
#define legacy_equipment_air_data_RawAirData_1_0_FLAG_HEATER_WORKING (2U)
/// saturated uint8 FLAG_HEATER_OVERCURRENT = 4
#define legacy_equipment_air_data_RawAirData_1_0_FLAG_HEATER_OVERCURRENT (4U)
/// saturated uint8 FLAG_HEATER_OPENCIRCUIT = 8
#define legacy_equipment_air_data_RawAirData_1_0_FLAG_HEATER_OPENCIRCUIT (8U)

/// Array metadata for: saturated float16[<=16] covariance
#define legacy_equipment_air_data_RawAirData_1_0_covariance_ARRAY_CAPACITY_           16U
#define legacy_equipment_air_data_RawAirData_1_0_covariance_ARRAY_IS_VARIABLE_LENGTH_ true

typedef struct
{
    /// saturated uint8 flags
    uint8_t flags;

    /// saturated float32 static_pressure
    float static_pressure;

    /// saturated float32 differential_pressure
    float differential_pressure;

    /// saturated float16 static_pressure_sensor_temperature
    float static_pressure_sensor_temperature;

    /// saturated float16 differential_pressure_sensor_temperature
    float differential_pressure_sensor_temperature;

    /// saturated float16 static_air_temperature
    float static_air_temperature;

    /// saturated float16 pitot_temperature
    float pitot_temperature;

    /// saturated float16[<=16] covariance
    struct  /// Array address equivalence guarantee: &elements[0] == &covariance
    {
        float elements[legacy_equipment_air_data_RawAirData_1_0_covariance_ARRAY_CAPACITY_];
        size_t count;
    } covariance;
} legacy_equipment_air_data_RawAirData_1_0;

/// Serialize an instance into the provided buffer.
/// The lifetime of the resulting serialized representation is independent of the original instance.
/// This method may be slow for large objects (e.g., images, point clouds, radar samples), so in a later revision
/// we may define a zero-copy alternative that keeps references to the original object where possible.
///
/// @param obj      The object to serialize.
///
/// @param buffer   The destination buffer. There are no alignment requirements.
///                 @see legacy_equipment_air_data_RawAirData_1_0_SERIALIZATION_BUFFER_SIZE_BYTES_
///
/// @param inout_buffer_size_bytes  When calling, this is a pointer to the size of the buffer in bytes.
///                                 Upon return this value will be updated with the size of the constructed serialized
///                                 representation (in bytes); this value is then to be passed over to the transport
///                                 layer. In case of error this value is undefined.
///
/// @returns Negative on error, zero on success.
static inline int8_t legacy_equipment_air_data_RawAirData_1_0_serialize_(
    const legacy_equipment_air_data_RawAirData_1_0* const obj, uint8_t* const buffer,  size_t* const inout_buffer_size_bytes)
{
    if ((obj == NULL) || (buffer == NULL) || (inout_buffer_size_bytes == NULL))
    {
        return -NUNAVUT_ERROR_INVALID_ARGUMENT;
    }


    const size_t capacity_bytes = *inout_buffer_size_bytes;
    if ((8U * (size_t) capacity_bytes) < 400UL)
    {
        return -NUNAVUT_ERROR_SERIALIZATION_BUFFER_TOO_SMALL;
    }
    // Notice that fields that are not an integer number of bytes long may overrun the space allocated for them
    // in the serialization buffer up to the next byte boundary. This is by design and is guaranteed to be safe.
    size_t offset_bits = 0U;





    {   // saturated uint8 flags
        // Saturation code not emitted -- native representation matches the serialized representation.
        buffer[offset_bits / 8U] = (uint8_t)(obj->flags);  // C std, 6.3.1.3 Signed and unsigned integers
        offset_bits += 8U;
    }




    {   // saturated float32 static_pressure
        // Saturation code not emitted -- assume the native representation of float32 is conformant.
        static_assert(NUNAVUT_PLATFORM_IEEE754_FLOAT, "Native IEEE754 binary32 required. TODO: relax constraint");
        static_assert(NUNAVUT_PLATFORM_IEEE754_FLOAT, "Native IEEE754 binary32 required. TODO: relax constraint");
        (void) memmove(&buffer[offset_bits / 8U], &obj->static_pressure, 4U);
        offset_bits += 32U;
    }




    {   // saturated float32 differential_pressure
        // Saturation code not emitted -- assume the native representation of float32 is conformant.
        static_assert(NUNAVUT_PLATFORM_IEEE754_FLOAT, "Native IEEE754 binary32 required. TODO: relax constraint");
        static_assert(NUNAVUT_PLATFORM_IEEE754_FLOAT, "Native IEEE754 binary32 required. TODO: relax constraint");
        (void) memmove(&buffer[offset_bits / 8U], &obj->differential_pressure, 4U);
        offset_bits += 32U;
    }




    {   // saturated float16 static_pressure_sensor_temperature
        float _sat0_ = obj->static_pressure_sensor_temperature;
        if (isfinite(_sat0_))
        {
            if (_sat0_ < ((float) -65504.0))
            {
                _sat0_ = ((float) -65504.0);
            }
            if (_sat0_ > ((float) 65504.0))
            {
                _sat0_ = ((float) 65504.0);
            }
        }
        const uint16_t _half0_ = nunavutFloat16Pack(_sat0_);
        (void) memmove(&buffer[offset_bits / 8U], &_half0_, 2U);
        offset_bits += 16U;
    }




    {   // saturated float16 differential_pressure_sensor_temperature
        float _sat1_ = obj->differential_pressure_sensor_temperature;
        if (isfinite(_sat1_))
        {
            if (_sat1_ < ((float) -65504.0))
            {
                _sat1_ = ((float) -65504.0);
            }
            if (_sat1_ > ((float) 65504.0))
            {
                _sat1_ = ((float) 65504.0);
            }
        }
        const uint16_t _half1_ = nunavutFloat16Pack(_sat1_);
        (void) memmove(&buffer[offset_bits / 8U], &_half1_, 2U);
        offset_bits += 16U;
    }




    {   // saturated float16 static_air_temperature
        float _sat2_ = obj->static_air_temperature;
        if (isfinite(_sat2_))
        {
            if (_sat2_ < ((float) -65504.0))
            {
                _sat2_ = ((float) -65504.0);
            }
            if (_sat2_ > ((float) 65504.0))
            {
                _sat2_ = ((float) 65504.0);
            }
        }
        const uint16_t _half2_ = nunavutFloat16Pack(_sat2_);
        (void) memmove(&buffer[offset_bits / 8U], &_half2_, 2U);
        offset_bits += 16U;
    }




    {   // saturated float16 pitot_temperature
        float _sat3_ = obj->pitot_temperature;
        if (isfinite(_sat3_))
        {
            if (_sat3_ < ((float) -65504.0))
            {
                _sat3_ = ((float) -65504.0);
            }
            if (_sat3_ > ((float) 65504.0))
            {
                _sat3_ = ((float) 65504.0);
            }
        }
        const uint16_t _half3_ = nunavutFloat16Pack(_sat3_);
        (void) memmove(&buffer[offset_bits / 8U], &_half3_, 2U);
        offset_bits += 16U;
    }




    {   // saturated float16[<=16] covariance
        if (obj->covariance.count > 16)
        {
            return -NUNAVUT_ERROR_REPRESENTATION_BAD_ARRAY_LENGTH;
        }
        // Array length prefix: truncated uint8
        buffer[offset_bits / 8U] = (uint8_t)(obj->covariance.count);  // C std, 6.3.1.3 Signed and unsigned integers
        offset_bits += 8U;
        for (size_t _index0_ = 0U; _index0_ < obj->covariance.count; ++_index0_)
        {
            float _sat4_ = obj->covariance.elements[_index0_];
            if (isfinite(_sat4_))
            {
                if (_sat4_ < ((float) -65504.0))
                {
                    _sat4_ = ((float) -65504.0);
                }
                if (_sat4_ > ((float) 65504.0))
                {
                    _sat4_ = ((float) 65504.0);
                }
            }
            const uint16_t _half4_ = nunavutFloat16Pack(_sat4_);
            (void) memmove(&buffer[offset_bits / 8U], &_half4_, 2U);
            offset_bits += 16U;
        }
    }


    if (offset_bits % 8U != 0U)  // Pad to 8 bits. TODO: Eliminate redundant padding checks.
    {
        const uint8_t _pad0_ = (uint8_t)(8U - offset_bits % 8U);
        const int8_t _err0_ = nunavutSetUxx(&buffer[0], capacity_bytes, offset_bits, 0U, _pad0_);  // Optimize?
        if (_err0_ < 0)
        {
            return _err0_;
        }
        offset_bits += _pad0_;
    }
    // It is assumed that we know the exact type of the serialized entity, hence we expect the size to match.





    *inout_buffer_size_bytes = (size_t) (offset_bits / 8U);

    return NUNAVUT_SUCCESS;
}

/// Deserialize an instance from the provided buffer.
/// The lifetime of the resulting object is independent of the original buffer.
/// This method may be slow for large objects (e.g., images, point clouds, radar samples), so in a later revision
/// we may define a zero-copy alternative that keeps references to the original buffer where possible.
///
/// @param obj      The object to update from the provided serialized representation.
///
/// @param buffer   The source buffer containing the serialized representation. There are no alignment requirements.
///                 If the buffer is shorter or longer than expected, it will be implicitly zero-extended or truncated,
///                 respectively; see Specification for "implicit zero extension" and "implicit truncation" rules.
///
/// @param inout_buffer_size_bytes  When calling, this is a pointer to the size of the supplied serialized
///                                 representation, in bytes. Upon return this value will be updated with the
///                                 size of the consumed fragment of the serialized representation (in bytes),
///                                 which may be smaller due to the implicit truncation rule, but it is guaranteed
///                                 to never exceed the original buffer size even if the implicit zero extension rule
///                                 was activated. In case of error this value is undefined.
///
/// @returns Negative on error, zero on success.
static inline int8_t legacy_equipment_air_data_RawAirData_1_0_deserialize_(
    legacy_equipment_air_data_RawAirData_1_0* const out_obj, const uint8_t* const buffer, size_t* const inout_buffer_size_bytes)
{
    if ((out_obj == NULL) || (buffer == NULL) || (inout_buffer_size_bytes == NULL))
    {
        return -NUNAVUT_ERROR_INVALID_ARGUMENT;
    }


    const size_t capacity_bytes = *inout_buffer_size_bytes;
    const size_t capacity_bits = capacity_bytes * (size_t) 8U;
    size_t offset_bits = 0U;





    // saturated uint8 flags
    if ((offset_bits + 8U) <= capacity_bits)
    {
        out_obj->flags = buffer[offset_bits / 8U] & 255U;
    }
    else
    {
        out_obj->flags = 0U;
    }
    offset_bits += 8U;




    // saturated float32 static_pressure
    out_obj->static_pressure = nunavutGetF32(&buffer[0], capacity_bytes, offset_bits);
    offset_bits += 32U;




    // saturated float32 differential_pressure
    out_obj->differential_pressure = nunavutGetF32(&buffer[0], capacity_bytes, offset_bits);
    offset_bits += 32U;




    // saturated float16 static_pressure_sensor_temperature
    out_obj->static_pressure_sensor_temperature = nunavutGetF16(&buffer[0], capacity_bytes, offset_bits);
    offset_bits += 16U;




    // saturated float16 differential_pressure_sensor_temperature
    out_obj->differential_pressure_sensor_temperature = nunavutGetF16(&buffer[0], capacity_bytes, offset_bits);
    offset_bits += 16U;




    // saturated float16 static_air_temperature
    out_obj->static_air_temperature = nunavutGetF16(&buffer[0], capacity_bytes, offset_bits);
    offset_bits += 16U;




    // saturated float16 pitot_temperature
    out_obj->pitot_temperature = nunavutGetF16(&buffer[0], capacity_bytes, offset_bits);
    offset_bits += 16U;




    // saturated float16[<=16] covariance
    // Array length prefix: truncated uint8
    if ((offset_bits + 8U) <= capacity_bits)
    {
        out_obj->covariance.count = buffer[offset_bits / 8U] & 255U;
    }
    else
    {
        out_obj->covariance.count = 0U;
    }
    offset_bits += 8U;
    if (out_obj->covariance.count > 16U)
    {
        return -NUNAVUT_ERROR_REPRESENTATION_BAD_ARRAY_LENGTH;
    }
    for (size_t _index1_ = 0U; _index1_ < out_obj->covariance.count; ++_index1_)
    {
        out_obj->covariance.elements[_index1_] = nunavutGetF16(&buffer[0], capacity_bytes, offset_bits);
        offset_bits += 16U;
    }


    offset_bits = (offset_bits + 7U) & ~(size_t) 7U;  // Align on 8 bits.

    *inout_buffer_size_bytes = (size_t) (nunavutChooseMin(offset_bits, capacity_bits) / 8U);


    return NUNAVUT_SUCCESS;
}

/// Initialize an instance to default values. Does nothing if @param out_obj is NULL.
/// This function intentionally leaves inactive elements uninitialized; for example, members of a variable-length
/// array beyond its length are left uninitialized; aliased union memory that is not used by the first union field
/// is left uninitialized, etc. If full zero-initialization is desired, just use memset(&obj, 0, sizeof(obj)).
static inline void legacy_equipment_air_data_RawAirData_1_0_initialize_(legacy_equipment_air_data_RawAirData_1_0* const out_obj)
{
    if (out_obj != NULL)
    {
        size_t size_bytes = 0;
        const uint8_t buf = 0;
        const int8_t err = legacy_equipment_air_data_RawAirData_1_0_deserialize_(out_obj, &buf, &size_bytes);

        (void) err;
    }
}



#ifdef __cplusplus
}
#endif
#endif // LEGACY_EQUIPMENT_AIR_DATA_RAW_AIR_DATA_1_0_INCLUDED_

