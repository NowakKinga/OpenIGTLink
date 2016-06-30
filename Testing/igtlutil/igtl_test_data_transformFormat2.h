/*=========================================================================

  Program:   OpenIGTLLink Library -- Dummy transform data
  Module:    $RCSfile: $
  Language:  C
  Date:      $Date: $
  Version:   $Revision: $

  Copyright (c) Insight Software Consortium. All rights reserved.

  This software is distributed WITHOUT ANY WARRANTY; without even
  the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
  PURPOSE.  See the above copyright notices for more information.

=========================================================================*/

#ifndef __IGTL_TEST_DATA_TRANSFORMFORMAT2_H
#define __IGTL_TEST_DATA_TRANSFORMFORMAT2_H

unsigned char test_transform_message_Format2[] = {
  0x00, 0x02,                                     /* Version number */
  0x54, 0x52, 0x41, 0x4e, 0x53, 0x46, 0x4f, 0x52,
  0x4d, 0x00, 0x00, 0x00,                         /* TRANSFORM */ 
  0x44, 0x65, 0x76, 0x69, 0x63, 0x65, 0x4e, 0x61,
  0x6d, 0x65, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,                         /* Device name */
  0x00, 0x00, 0x00, 0x00, 0x49, 0x96, 0x02, 0xd4, /* Time stamp */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, /* Body size */
  0xf6, 0x98, 0xf6, 0x4f, 0xda, 0xe2, 0x66, 0xdd, /* CRC */
  
  0x00, 0x0c, 0x00, 0x12, 0x00, 0x00, 0x00, 0x27,  /*Extended header*/
  0x00, 0x00, 0x00, 0x01,
  0xBF, 0x74, 0x73, 0xCD, 0x3E, 0x49, 0x59, 0xE6, /* tx, ty */
  0xBE, 0x63, 0xDD, 0x98, 0xBE, 0x49, 0x59, 0xE6, /* tz, sx */
  0x3E, 0x12, 0x49, 0x1B, 0x3F, 0x78, 0x52, 0xD6, /* sy, sz */
  0x3E, 0x63, 0xDD, 0x98, 0x3F, 0x78, 0x52, 0xD6, /* nx, ny */
  0xBD, 0xC8, 0x30, 0xAE, 0x42, 0x38, 0x36, 0x60, /* nz, px */
  0x41, 0x9B, 0xC4, 0x67, 0x42, 0x38, 0x36, 0x60, /* py, pz */
  
  0x00, 0x02,                                     /* Index Count */
  0x00, 0x11, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, /* first element Key size(2 Bytes) */
                                                  /*value coding(2 Bytes), value size(4 Bytes)*/
  0x00, 0x12, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, /* second element Key size, value coding, value size*/
  0x46, 0x69, 0x72, 0x73, 0x74, 0x20, 0x70, 0x61,
  0x74, 0x69, 0x65, 0x6e, 0x74, 0x20, 0x61, 0x67,
  0x65, 0x32, 0x32, 0x53, 0x65, 0x63, 0x6f, 0x6e,
  0x64, 0x20, 0x70, 0x61, 0x74, 0x69, 0x65, 0x6e,
  0x74, 0x20, 0x61, 0x67, 0x65, 0x32, 0x35
};

#endif /* IGTL_TEST_DATA_TRANSFORMFORMAT2_H */